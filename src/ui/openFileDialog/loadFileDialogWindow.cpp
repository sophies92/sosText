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
    Project::IProject *newProject;
    if(std::filesystem::is_directory(*path))
    {
        newProject = new Project::Project();
        newProject->setProjectType(Project::ProjectType::PROJECT);
    }
    else
    {
        newProject = new Project::File();
        newProject->setProjectType(Project::ProjectType::FILE);
    }
    newProject->setPath(path->c_str());
    emit projectOpened(newProject);
    this->close();
}


void LoadFileDialogWindow::updateUIPathView()
{
    ui->filepath->setPlainText(path->c_str());
}
