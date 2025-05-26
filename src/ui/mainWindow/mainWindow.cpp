#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);
    connect(ui->actionOpen_File, &QAction::triggered , this, &MainWindow::openFileDialogSelected);
    connect(ui->actionSave_File, &QAction::triggered, this, &MainWindow::fileSaved);
    connect(ui->filesTabs, &QTabWidget::tabCloseRequested, this, &MainWindow::closeTab);
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// TODO add action for show welcome screen
void MainWindow::addNewWelcomeTab(WelcomeTab *tab)
{
    int index = ui->filesTabs->addTab(tab, "Welcome");
    ui->filesTabs->setCurrentIndex(index);
}

void MainWindow::addNewFileTab(NewFileTab *tab)
{
    int tabIndex = ui->filesTabs->addTab(tab, tab->file->getFilename()->c_str());
    ui->filesTabs->setCurrentIndex(tabIndex);
}

void MainWindow::closeTab(int index)
{
    ui->filesTabs->removeTab(index);
}

void MainWindow::startNewProjectSelected()
{
    emit requestNewProjectSignal();
}

void MainWindow::openFileDialogSelected()
{
    emit requestOpenFileDialogSignal();
}

void MainWindow::fileOpened(std::filesystem::path *path)
{

}

void MainWindow::projectOpened(std::filesystem::path *path)
{
}

void MainWindow::fileSaved()
{
    
}



