#include "app.h"

App::App::App(QObject *parent) : QObject()
{
    showMainWindow();
}

App::App::~App()
{
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
    loadFileDialogWindow->show();
}
