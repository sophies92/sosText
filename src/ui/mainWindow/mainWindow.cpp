#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);
    connectActions();
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

Ui::MainWindow *MainWindow::getUi()
{
    return(ui);
}

void MainWindow::addNewFileTab(NewFileTab *tab)
{
    int tabIndex = ui->filesTabs->addTab(tab, tab->file->getFilename()->c_str());
    ui->filesTabs->setCurrentIndex(tabIndex);
}

void MainWindow::closeTab(int index)
{
    // TODO more delete
    ui->filesTabs->removeTab(index);
}

void MainWindow::fileOpened(std::filesystem::path *path)
{

}

void MainWindow::projectOpened(std::filesystem::path *path)
{
}

void MainWindow::fileSaved()
{
    if(ui->filesTabs->currentWidget()->objectName() != "WelcomeTab")
    {
        NewFileTab *tab = dynamic_cast<NewFileTab*>(ui->filesTabs->currentWidget());
        tab->file->saveFile(tab->textEdit->toPlainText());
    }    
}

void MainWindow::allFilesSaved()
{
}

void MainWindow::connectActions()
{
    connect(ui->actionShow_Welcome_Tab, &QAction::triggered, this, &MainWindow::requestWelcomeTabSignal);
    connect(ui->action_New_File, &QAction::triggered, this, &MainWindow::requestFileTabSignal);
    connect(ui->actionNew_Project, &QAction::triggered, this, &MainWindow::requestNewProjectSignal);
    connect(ui->actionOpen_File, &QAction::triggered, this, &MainWindow::requestOpenFileDialogSignal);
    connect(ui->actionSave_File, &QAction::triggered, this, &MainWindow::fileSaved);
    // connect(ui->actionSave_As, &QAction::triggered, this, &MainWindow);
    // connect(ui->actionSave_All, &QAction::triggered, this, &MainWindow);
    connect(ui->actionSettings_Preferences, &QAction::triggered, this, &MainWindow::requestSettingsWindowSignal);
    connect(ui->actionE_xit, &QAction::triggered, this, &MainWindow::close);
    connect(ui->filesTabs, &QTabWidget::tabCloseRequested, this, &MainWindow::closeTab);
}