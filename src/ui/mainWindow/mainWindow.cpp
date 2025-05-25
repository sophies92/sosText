#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);
    showWelcomeTab();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFileDialog()
{
    emit openFileDialogClicked();
}

void MainWindow::closeTab(int index)
{
    ui->filesTabs->removeTab(index);
}

void MainWindow::showWelcomeTab()
{
    WelcomeTab *welcomeTab = new WelcomeTab();

    connect(welcomeTab, &WelcomeTab::newFileButtonPressedSignal, this, &MainWindow::newFileStarted);
    connect(welcomeTab, &WelcomeTab::openFileButtonPressedSignal, this, &MainWindow::fileOpened);
    connect(welcomeTab, &WelcomeTab::newProjectButtonPressedSignal, this, &MainWindow::newProjectStarted);
    connect(welcomeTab, &WelcomeTab::openProjectButtonPressedSignal, this, &MainWindow::projectOpened);

    int index = ui->filesTabs->addTab(welcomeTab, "Welcome");
    ui->filesTabs->setCurrentIndex(index);
}

void MainWindow::newFileStarted()
{
    Project::File *file = new Project::File();
    file->setPath("newFile");
    addNewFileTab(file);
}

void MainWindow::fileOpened()
{
    emit openFileDialogClicked();
}

void MainWindow::newProjectStarted()
{
}

void MainWindow::projectOpened()
{
    emit openFileDialogClicked();
}

void MainWindow::addNewFileTab(Project::File *file)
{
    NewFileTab *newFileTab = new NewFileTab();
    newFileTab->textEdit->setText(file->getPath()->c_str());
    int tabIndex = ui->filesTabs->addTab(newFileTab, file->getPath()->c_str());
    ui->filesTabs->setCurrentIndex(tabIndex);
}
