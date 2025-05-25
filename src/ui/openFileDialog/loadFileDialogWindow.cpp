#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent, Project::Project *currentProject) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &LoadFileDialogWindow::openFileButton);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &LoadFileDialogWindow::close);
    connect(ui->directories, &QTreeView::clicked, this, &LoadFileDialogWindow::onDirListClick);

    path = new std::string("/");
    filesModel = new QFileSystemModel();
    filesModel->setRootPath(ui->filepath->toPlainText());
    ui->directories->setModel(filesModel);
    ui->directories->expandToDepth(1);
    updateUIPathView();
}

LoadFileDialogWindow::~LoadFileDialogWindow()
{
    delete path;
    delete ui;
}

void LoadFileDialogWindow::onDirListClick(QModelIndex index)
{
    *path = filesModel->filePath(index).toStdString().c_str();
    updateUIPathView();
}

void LoadFileDialogWindow::openFileButton()
{
    emit fileOpened(path);
    this->close();
}


void LoadFileDialogWindow::updateUIPathView()
{
    ui->filepath->setPlainText(path->c_str());
}
