#include "app.h"

App::App::App(QObject *parent) : QObject()
{
    showMainWindow();
}

App::App::~App()
{
}

void App::App::setProject(Project::IProject *project)
{
    this->project = project;
}

void App::App::projectOpened(Project::IProject *project)
{
    this->project = project;
    std::cout << this->project->getPath()->c_str() << std::endl;
}

void App::App::showMainWindow()
{
    mainWindow = new MainWindow();
    connect(mainWindow, &MainWindow::openFileDialogClicked, this, &App::showLoadFileDialogWindow);
    mainWindow->showMaximized();
}

void App::App::showLoadFileDialogWindow()
{
    loadFileDialogWindow = new LoadFileDialogWindow(mainWindow, project);
    connect(loadFileDialogWindow, &LoadFileDialogWindow::projectOpened, this, &App::projectOpened);
    loadFileDialogWindow->show();
}
