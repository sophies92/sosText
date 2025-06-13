#include "fileBrowserWindow.h"
#include "ui_fileBrowserWindow.h"

sosText::ui::FileBrowserWindow::FileBrowserWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::FileBrowserWindow)
{
    FileBrowserWindow::ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &FileBrowserWindow::openFileButton);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &FileBrowserWindow::close);
    connect(ui->directories, &QTreeView::clicked, this, &FileBrowserWindow::onDirListClick);
}

sosText::ui::FileBrowserWindow::~FileBrowserWindow()
{
    delete path;
    delete ui;
}

void sosText::ui::FileBrowserWindow::showDirectories(std::filesystem::path pathToRoot)
{
    path = new std::filesystem::path(pathToRoot);
    filesModel = new QFileSystemModel();
    filesModel->setRootPath(ui->filepath->toPlainText());
    ui->directories->setModel(filesModel);
    ui->directories->expandToDepth(1);
    updateUIPathView();
}

void sosText::ui::FileBrowserWindow::onDirListClick(QModelIndex index)
{
    *path = filesModel->filePath(index).toStdString().c_str();
    updateUIPathView();
}

void sosText::ui::FileBrowserWindow::openFileButton()
{
    emit fileOpened(path);
    this->close();
}

void sosText::ui::FileBrowserWindow::close()
{
    delete this;
}

void sosText::ui::FileBrowserWindow::updateUIPathView()
{
    ui->filepath->setPlainText(path->c_str());
}
