#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);
    connect(ui->actionOpen_File, &QAction::triggered , this, &MainWindow::openFileDialog);
    connect(ui->filesTabs, &QTabWidget::tabCloseRequested, this, &MainWindow::closeTab);
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::close);
    showWelcomeTab();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showWelcomeTab()
{
    WelcomeTab *welcomeTab = new WelcomeTab();

    connect(welcomeTab, &WelcomeTab::newFileButtonPressedSignal, this, &MainWindow::newFileStarted);
    connect(welcomeTab, &WelcomeTab::openFileButtonPressedSignal, this, &MainWindow::openFileDialog);
    connect(welcomeTab, &WelcomeTab::newProjectButtonPressedSignal, this, &MainWindow::newProjectStarted);
    connect(welcomeTab, &WelcomeTab::openProjectButtonPressedSignal, this, &MainWindow::openFileDialog);

    int index = ui->filesTabs->addTab(welcomeTab, "Welcome");
    ui->filesTabs->setCurrentIndex(index);
}

void MainWindow::addNewFileTab(Project::File *file)
{
    NewFileTab *newFileTab = new NewFileTab();
    newFileTab->textEdit->setText(file->getPath()->c_str());
    int tabIndex = ui->filesTabs->addTab(newFileTab, file->getPath()->c_str());
    ui->filesTabs->setCurrentIndex(tabIndex);
}

void MainWindow::closeTab(int index)
{
    ui->filesTabs->removeTab(index);
}

void MainWindow::newFileStarted()
{
    Project::File *file = new Project::File();
    file->setPath("newFile");
    addNewFileTab(file);
}

void MainWindow::newProjectStarted()
{
}

void MainWindow::openFileDialog()
{
    emit openFileDialogClicked();
}


