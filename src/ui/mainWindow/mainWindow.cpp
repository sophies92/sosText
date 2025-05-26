#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);
    connect(ui->actionOpen_File, &QAction::triggered , this, &MainWindow::openFileDialogSelected);
    connect(ui->filesTabs, &QTabWidget::tabCloseRequested, this, &MainWindow::closeTab);
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::close);
    showWelcomeTab();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// TODO add action for show welcome screen
void MainWindow::showWelcomeTab()
{
    WelcomeTab *welcomeTab = new WelcomeTab();

    connect(welcomeTab, &WelcomeTab::newFileButtonPressedSignal, this, &MainWindow::newFileStarted);
    connect(welcomeTab, &WelcomeTab::openFileButtonPressedSignal, this, &MainWindow::openFileDialogSelected);
    connect(welcomeTab, &WelcomeTab::newProjectButtonPressedSignal, this, &MainWindow::startNewProjectSelected);
    connect(welcomeTab, &WelcomeTab::openProjectButtonPressedSignal, this, &MainWindow::openFileDialogSelected);

    int index = ui->filesTabs->addTab(welcomeTab, "Welcome");
    ui->filesTabs->setCurrentIndex(index);
}

void MainWindow::closeTab(int index)
{
    ui->filesTabs->removeTab(index);
}

void MainWindow::newFileStarted()
{
    Project::File *file = new Project::File();
    file->setPath("");
    addNewFileTab(file);
}

void MainWindow::startNewProjectSelected()
{
    emit startNewProjectSelectedSignal();
}

void MainWindow::openFileDialogSelected()
{
    emit openFileDialogSelectedSignal();
}

void MainWindow::fileOpened(std::filesystem::path *path)
{
    Project::File *file = new Project::File();
    file->setPath(*path);
    file->setFilename(path->filename());
    addNewFileTab(file);
}

void MainWindow::projectOpened(std::filesystem::path *path)
{
    Project::Project *project = new Project::Project();
    // TODO add project to main screen
}

void MainWindow::addNewFileTab(Project::File *file)
{
    NewFileTab *newFileTab = new NewFileTab();
    // TODO set file text
    newFileTab->textEdit->setText(file->loadFileText()->c_str());
    int tabIndex = ui->filesTabs->addTab(newFileTab, file->getfilename()->c_str());
    ui->filesTabs->setCurrentIndex(tabIndex);
}