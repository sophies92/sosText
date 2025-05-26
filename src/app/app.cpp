#include "app.h"

App::App::App(QObject *parent) : QObject()
{
    showMainWindow();
}

App::App::~App()
{
}

void App::App::showLoadFileDialogWindow()
{
    loadFileDialogWindow = new LoadFileDialogWindow(mainWindow);
    connect(loadFileDialogWindow, &LoadFileDialogWindow::fileOpened, this, &App::fileOpened);
    loadFileDialogWindow->show();
}

void App::App::showNewProjectWindow()
{
    // TODO show new project wizard
}

void App::App::fileOpened(std::filesystem::path *path)
{
    if(std::filesystem::is_directory(path->c_str()))
    {
        emit projectOpenedSignal(path);
    }
    else
    {
        emit fileOpenedSignal(path);
    }
}

void App::App::showMainWindow()
{
    mainWindow = new MainWindow();
    connect(mainWindow, &MainWindow::openFileDialogSelectedSignal, this, &App::showLoadFileDialogWindow);
    connect(this, &App::fileOpenedSignal, mainWindow, &MainWindow::fileOpened);
    connect(this, &App::projectOpenedSignal, mainWindow, &MainWindow::projectOpened);
    connect(mainWindow, &MainWindow::startNewProjectSelectedSignal, this, &App::showNewProjectWindow);
    mainWindow->showMaximized();
}