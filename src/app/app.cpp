#include "app.h"

App::App::App(QObject *parent) : QObject()
{
    openFiles = new std::vector<QWidget*>();
    showMainWindow();
}

App::App::~App()
{
    delete openFiles;
}

void App::App::showMainWindow()
{
    mainWindow = new MainWindow();
    connect(mainWindow, &MainWindow::requestOpenFileDialogSignal, this, &App::openFileDialogRequested);
    connect(mainWindow, &MainWindow::requestNewProjectSignal, this, &App::newProjectWindowRequested);
    connect(mainWindow, &MainWindow::requestWelcomeTabSignal, this, &App::welcomeTabRequested);
    connect(mainWindow, &MainWindow::requestFileTabSignal, this, &App::fileTabRequested);
    connect(mainWindow, &MainWindow::tabClosedSignal, this, &App::tabClosed);
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
    connect(welcomeTab, &WelcomeTab::openFileButtonPressedSignal, mainWindow, &MainWindow::openFileDialogSelected);
    connect(welcomeTab, &WelcomeTab::newProjectButtonPressedSignal, mainWindow, &MainWindow::startNewProjectSelected);
    connect(welcomeTab, &WelcomeTab::openProjectButtonPressedSignal, mainWindow, &MainWindow::openFileDialogSelected);
    openFiles->push_back(welcomeTab);
    emit newWelcomeTabSignal(welcomeTab); 
}

NewFileTab *App::App::fileTabRequested()
{
    NewFileTab *tab = new NewFileTab();
    std::cout << openFiles->size() << std::endl;
    return(tab);
}

void App::App::tabClosed(int index)
{
    delete openFiles->at(index);
    openFiles->erase(openFiles->begin() +index);
}

void App::App::fileStarted()
{
    NewFileTab *tab = fileTabRequested();
    tab->file->setPath("newFile");
    tab->file->setFilename("newFile");
    openFiles->push_back(tab);
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
        openFiles->push_back(tab);
        emit newFileTabSignal(tab);
    }
}

