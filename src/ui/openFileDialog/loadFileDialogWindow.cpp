#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent, Project::IProject *currentProject) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);
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

void LoadFileDialogWindow::onDirListClick(QModelIndex index)
{
    *path = filesModel->filePath(index).toStdString().c_str();
    updateUIPathView();
}

void LoadFileDialogWindow::openFileButton()
{
    if(std::filesystem::is_directory(*path))
    {
        Project::IProject *project = new Project::IProject();
        project->setPath(path->c_str());
        emit projectOpened(project);
    }
    else
    {
    }
    this->close();
}


void LoadFileDialogWindow::updateUIPathView()
{
    ui->filepath->setPlainText(path->c_str());
}
