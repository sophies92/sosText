#include "appManager.h"

Utils::AppManager::AppManager()
{
    mainWindow = new MainWindow();
    mainWindow->showMaximized();
}

Utils::AppManager::~AppManager()
{
    delete mainWindow;
}
