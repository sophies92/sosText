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

void App::App::fileOpened(std::string *path)
{
    emit fileOpenedSignal(path);
}

void App::App::showMainWindow()
{
    mainWindow = new MainWindow();
    connect(mainWindow, &MainWindow::openFileDialogClicked, this, &App::showLoadFileDialogWindow);
    connect(this, &App::App::fileOpenedSignal, mainWindow, &MainWindow::fileOpened);
    mainWindow->showMaximized();
}