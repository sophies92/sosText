#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent, Project::Project *currentProject) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);
    this->project = currentProject;
    path = new std::string("/");
    filesModel = new QFileSystemModel();
    filesModel->setRootPath(ui->filepath->toPlainText());
    ui->directories->setModel(filesModel);
    ui->directories->expandToDepth(0);
    updateUIPathView();
}

LoadFileDialogWindow::~LoadFileDialogWindow()
{
    delete path;
    delete ui;
}

void LoadFileDialogWindow::cancelButton()
{

}

void LoadFileDialogWindow::onDirListClick(QModelIndex index)
{
    if(filesModel->isDir(index))
    {
        *path = filesModel->filePath(index).toStdString().c_str();
    }
    updateUIPathView();
}

void LoadFileDialogWindow::openFileButton()
{
    if(std::filesystem::is_directory(*path))
    {
        project = new Project::Project();
        project->setPath(*path);
    }
    else
    {
        project = new Project::Project();
        project->setPath(*path);
        // do something to show pathis set
    }
}

void LoadFileDialogWindow::upButton()
{
    
}

void LoadFileDialogWindow::updateUIPathView()
{
    ui->filepath->setPlainText(path->c_str());
}
