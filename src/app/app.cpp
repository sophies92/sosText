#include "app.h"

sosText::App::App::App(QObject *parent) : QObject()
{
    this->appSettings = createNewAppSettings();
    this->appSettings->LoadSettings();
    mainWindowRequested();
}

sosText::App::App::~App()
{
    delete appSettings;
}

NewFileTab *sosText::App::App::createNewFileTab()
{
    NewFileTab *tab = new NewFileTab();
    return(tab);
}

sosText::settings::AppSettings *sosText::App::App::createNewAppSettings()
{
    sosText::settings::AppSettings *settings = new sosText::settings::AppSettings();
    return(settings);
}

void sosText::App::App::mainWindowRequested()
{
    mainWindow = new sosText::ui::MainWindow();
    connect(mainWindow, &sosText::ui::MainWindow::requestOpenFileDialogSignal, this, &App::openFileDialogRequested);
    connect(mainWindow, &sosText::ui::MainWindow::requestNewProjectSignal, this, &App::newProjectWindowRequested);
    connect(mainWindow, &sosText::ui::MainWindow::requestWelcomeTabSignal, this, &App::welcomeTabRequested);
    connect(mainWindow, &sosText::ui::MainWindow::requestFileTabSignal, this, &App::fileStarted);
    connect(mainWindow, &sosText::ui::MainWindow::requestSettingsWindowSignal, this, &App::settingsWindowRequested);
    connect(this, &App::newWelcomeTabSignal, mainWindow, &sosText::ui::MainWindow::addNewWelcomeTab);
    connect(this, &App::newFileTabSignal, mainWindow, &sosText::ui::MainWindow::addNewFileTab);
    mainWindow->showMaximized();
    emit mainWindow->requestWelcomeTabSignal();
}

void sosText::App::App::openFileDialogRequested()
{
    loadFileDialogWindow = new sosText::ui::LoadFileDialogWindow(mainWindow);
    connect(loadFileDialogWindow, &sosText::ui::LoadFileDialogWindow::fileOpened, this, &App::fileOpened);
    loadFileDialogWindow->show();
}

void sosText::App::App::newProjectWindowRequested()
{
    // TODO show new project wizard
}

void sosText::App::App::welcomeTabRequested()
{
    WelcomeTab *welcomeTab = new WelcomeTab();
    connect(welcomeTab, &WelcomeTab::newFileButtonPressedSignal, this, &App::fileStarted);
    connect(welcomeTab, &WelcomeTab::openFileButtonPressedSignal, mainWindow, &sosText::ui::MainWindow::requestOpenFileDialogSignal);
    connect(welcomeTab, &WelcomeTab::newProjectButtonPressedSignal, mainWindow, &sosText::ui::MainWindow::requestNewProjectSignal);
    connect(welcomeTab, &WelcomeTab::openProjectButtonPressedSignal, mainWindow, &sosText::ui::MainWindow::requestOpenFileDialogSignal);
    emit newWelcomeTabSignal(welcomeTab); 
}

void sosText::App::App::settingsWindowRequested()
{
    settingsWindow = new SettingsWindow(mainWindow);
    settingsWindow->show();
}

void sosText::App::App::fileStarted()
{
    NewFileTab *tab = createNewFileTab();
    tab->file->setPath("newFile");
    tab->file->setFilename("newFile");
    emit newFileTabSignal(tab);
}

void sosText::App::App::fileOpened(std::filesystem::path *path)
{
    if(std::filesystem::is_directory(path->c_str()))
    {
        emit projectOpenedSignal(path);
    }
    else
    {
        NewFileTab *tab = createNewFileTab();
        tab->file->setPath(path->c_str());
        tab->file->setFilename(path->filename().c_str());
        tab->file->setFileText(tab->file->loadFile());
        tab->textEdit->setText(tab->file->getFileText()->c_str());
        emit newFileTabSignal(tab);
    }
}

