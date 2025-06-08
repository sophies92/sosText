#include "app.h"

sosText::app::App::App(QObject *parent) : QObject()
{
    mainWindowRequested();

    this->outputTerminal = createNewOutputTerminal();

    this->appSettings = createNewAppSettings();
    emit requestPrintToOutput("Loading Settings...");
    this->appSettings->LoadSettings();
    emit requestPrintToOutput("done!");

    mainWindow->showMaximized();
    emit mainWindow->requestWelcomeTabSignal();
}

sosText::app::App::~App()
{
    delete appSettings;
    delete outputTerminal;
}

NewFileTab *sosText::app::App::createNewFileTab()
{
    NewFileTab *tab = new NewFileTab();
    return(tab);
}

sosText::settings::AppSettings *sosText::app::App::createNewAppSettings()
{
    sosText::settings::AppSettings *settings = new sosText::settings::AppSettings();
    return(settings);
}

sosText::output::OutputTerminal *sosText::app::App::createNewOutputTerminal()
{
    sosText::output::OutputTerminal *terminal = new sosText::output::OutputTerminal();
    terminal->setTextArea(mainWindow->getOutputBox());
    connect(this, &sosText::app::App::requestPrintToOutput, terminal, &sosText::output::OutputTerminal::printToOutputRequested);
    connect(mainWindow, &sosText::ui::MainWindow::requestPrintToOutput, terminal, &sosText::output::OutputTerminal::printToOutputRequested);
    return(terminal);
}

void sosText::app::App::mainWindowRequested()
{
    mainWindow = new sosText::ui::MainWindow();
    connect(mainWindow, &sosText::ui::MainWindow::requestOpenFileDialogSignal, this, &App::openFileDialogRequested);
    connect(mainWindow, &sosText::ui::MainWindow::requestNewProjectSignal, this, &App::newProjectWindowRequested);
    connect(mainWindow, &sosText::ui::MainWindow::requestWelcomeTabSignal, this, &App::welcomeTabRequested);
    connect(mainWindow, &sosText::ui::MainWindow::requestFileTabSignal, this, &App::fileStarted);
    connect(mainWindow, &sosText::ui::MainWindow::requestSettingsWindowSignal, this, &App::settingsWindowRequested);
    connect(this, &App::newWelcomeTabSignal, mainWindow, &sosText::ui::MainWindow::addNewWelcomeTab);
    connect(this, &App::newFileTabSignal, mainWindow, &sosText::ui::MainWindow::addNewFileTab);
}

void sosText::app::App::openFileDialogRequested()
{
    loadFileDialogWindow = new sosText::ui::LoadFileDialogWindow(mainWindow);
    connect(loadFileDialogWindow, &sosText::ui::LoadFileDialogWindow::fileOpened, this, &App::fileOpened);
    connect(loadFileDialogWindow, &sosText::ui::LoadFileDialogWindow::requestPrintToOutput, outputTerminal, &sosText::output::OutputTerminal::printToOutputRequested);
    loadFileDialogWindow->show();
    loadFileDialogWindow->showDirectories("/");
}

void sosText::app::App::newProjectWindowRequested()
{
    // TODO show new project wizard
    emit requestPrintToOutput("New project started...");
}

void sosText::app::App::welcomeTabRequested()
{
    sosText::ui::WelcomeTab *welcomeTab = new sosText::ui::WelcomeTab();
    connect(welcomeTab, &sosText::ui::WelcomeTab::newFileButtonPressedSignal, this, &App::fileStarted);
    connect(welcomeTab, &sosText::ui::WelcomeTab::openFileButtonPressedSignal, mainWindow, &sosText::ui::MainWindow::requestOpenFileDialogSignal);
    connect(welcomeTab, &sosText::ui::WelcomeTab::newProjectButtonPressedSignal, mainWindow, &sosText::ui::MainWindow::requestNewProjectSignal);
    connect(welcomeTab, &sosText::ui::WelcomeTab::openProjectButtonPressedSignal, mainWindow, &sosText::ui::MainWindow::requestOpenFileDialogSignal);
    emit newWelcomeTabSignal(welcomeTab); 
}

void sosText::app::App::settingsWindowRequested()
{
    settingsWindow = new sosText::ui::SettingsWindow(mainWindow);
    connect(settingsWindow, &sosText::ui::SettingsWindow::requestGetAllSettings, this, &sosText::app::App::getAllSettingsRequested);
    connect(this, &sosText::app::App::settingsRequestReturnSignal, settingsWindow, &sosText::ui::SettingsWindow::allSettingsRequestReturn);
    connect(settingsWindow, &sosText::ui::SettingsWindow::requestSaveSettings, this, &sosText::app::App::saveSettingsRequested);
    connect(settingsWindow, &sosText::ui::SettingsWindow::requestSetDefaults, this, &sosText::app::App::setDefaultSettingsRequested);
    settingsWindow->show();
}

void sosText::app::App::getAllSettingsRequested()
{
    emit settingsRequestReturnSignal(this->appSettings->getAllSettings());
}

void sosText::app::App::saveSettingsRequested()
{
    // TODO save settings
}

void sosText::app::App::setDefaultSettingsRequested()
{
    // TODO set defaults
}

void sosText::app::App::fileStarted()
{
    NewFileTab *tab = createNewFileTab();
    tab->file->setPath("newFile");
    tab->file->setFilename("newFile");
    emit newFileTabSignal(tab);
}

void sosText::app::App::fileOpened(std::filesystem::path *path)
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
        tab->textEdit->setPlainText(tab->file->getFileText()->c_str());
        emit newFileTabSignal(tab);
    }
}

