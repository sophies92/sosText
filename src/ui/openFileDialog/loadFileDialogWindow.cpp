#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

sosText::ui::LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &LoadFileDialogWindow::openFileButton);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &LoadFileDialogWindow::close);
    connect(ui->directories, &QTreeView::clicked, this, &LoadFileDialogWindow::onDirListClick);
}

sosText::ui::LoadFileDialogWindow::~LoadFileDialogWindow()
{
    delete path;
    delete ui;
}

void sosText::ui::LoadFileDialogWindow::showDirectories(std::filesystem::path pathToRoot)
{
    path = new std::filesystem::path(pathToRoot);
    filesModel = new QFileSystemModel();
    filesModel->setRootPath(ui->filepath->toPlainText());
    ui->directories->setModel(filesModel);
    ui->directories->expandToDepth(1);
    updateUIPathView();
}

void sosText::ui::LoadFileDialogWindow::onDirListClick(QModelIndex index)
{
    *path = filesModel->filePath(index).toStdString().c_str();
    updateUIPathView();
}

void sosText::ui::LoadFileDialogWindow::openFileButton()
{
    emit fileOpened(path);
    this->close();
}

void sosText::ui::LoadFileDialogWindow::close()
{
    delete this;
}

void sosText::ui::LoadFileDialogWindow::updateUIPathView()
{
    ui->filepath->setPlainText(path->c_str());
}
