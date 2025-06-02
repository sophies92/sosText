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
    connect(mainWindow, &MainWindow::requestOpenFileDialogSignal, this, &App::openFileDialogRequested);
    connect(mainWindow, &MainWindow::requestNewProjectSignal, this, &App::newProjectWindowRequested);
    connect(mainWindow, &MainWindow::requestWelcomeTabSignal, this, &App::welcomeTabRequested);
    connect(mainWindow, &MainWindow::requestFileTabSignal, this, &App::fileStarted);
    connect(this, &App::newWelcomeTabSignal, mainWindow, &MainWindow::addNewWelcomeTab);
    connect(this, &App::newFileTabSignal, mainWindow, &MainWindow::addNewFileTab);
    mainWindow->showMaximized();
    emit mainWindow->requestWelcomeTabSignal();
}

void App::App::openFileDialogRequested()
{
    loadFileDialogWindow = new LoadFileDialogWindow(mainWindow);
    connect(loadFileDialogWindow, &LoadFileDialogWindow::fileOpened, this, &App::fileOpened);
    loadFileDialogWindow->show();
}

void App::App::newProjectWindowRequested()
{
    // TODO show new project wizard
}

void App::App::welcomeTabRequested()
{
    WelcomeTab *welcomeTab = new WelcomeTab();
    connect(welcomeTab, &WelcomeTab::newFileButtonPressedSignal, this, &App::fileStarted);
    connect(welcomeTab, &WelcomeTab::openFileButtonPressedSignal, mainWindow, &MainWindow::requestOpenFileDialogSignal);
    connect(welcomeTab, &WelcomeTab::newProjectButtonPressedSignal, mainWindow, &MainWindow::requestNewProjectSignal);
    connect(welcomeTab, &WelcomeTab::openProjectButtonPressedSignal, mainWindow, &MainWindow::requestOpenFileDialogSignal);
    emit newWelcomeTabSignal(welcomeTab); 
}

NewFileTab *App::App::fileTabRequested()
{
    NewFileTab *tab = new NewFileTab();
    return(tab);
}

void App::App::fileStarted()
{
    NewFileTab *tab = fileTabRequested();
    tab->file->setPath("newFile");
    tab->file->setFilename("newFile");
    emit newFileTabSignal(tab);
}

void App::App::fileOpened(std::filesystem::path *path)
{
    if(std::filesystem::is_directory(path->c_str()))
    {
        emit projectOpenedSignal(path);
    }
    else
    {
        NewFileTab *tab = fileTabRequested();
        tab->file->setPath(path->c_str());
        tab->file->setFilename(path->filename().c_str());
        tab->file->setFileText(tab->file->loadFile());
        tab->textEdit->setText(tab->file->getFileText()->c_str());
        emit newFileTabSignal(tab);
    }
}

