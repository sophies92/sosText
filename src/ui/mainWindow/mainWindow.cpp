#include "mainWindow.h"
#include "ui_mainWindow.h"

sosText::ui::MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    sosText::ui::MainWindow::ui->setupUi(this);
    connectActions();
}

sosText::ui::MainWindow::~MainWindow()
{
    delete ui;
}

void sosText::ui::MainWindow::addNewWelcomeTab(WelcomeTab *tab)
{
    int index = ui->filesTabs->addTab(tab, "Welcome");
    ui->filesTabs->setCurrentIndex(index);
}

Ui::MainWindow *sosText::ui::MainWindow::getUi()
{
    return(ui);
}

QPlainTextEdit *sosText::ui::MainWindow::getOutputBox()
{
    return(ui->OutputTerminalTextEdit);
}

void sosText::ui::MainWindow::addNewFileTab(NewFileTab *tab)
{
    int tabIndex = ui->filesTabs->addTab(tab, tab->file->getFilename()->c_str());
    ui->filesTabs->setCurrentIndex(tabIndex);
}

void sosText::ui::MainWindow::closeTab(int index)
{
    // TODO more delete
    ui->filesTabs->removeTab(index);
}

void sosText::ui::MainWindow::fileOpened(std::filesystem::path *path)
{

}

void sosText::ui::MainWindow::projectOpened(std::filesystem::path *path)
{
}

void sosText::ui::MainWindow::fileSaved()
{
    if(ui->filesTabs->currentWidget()->objectName() != "WelcomeTab")
    {
        NewFileTab *tab = dynamic_cast<NewFileTab*>(ui->filesTabs->currentWidget());
        tab->file->saveFile(tab->textEdit->toPlainText());
        emit requestPrintToOutput("File saved!");
    }    
}

void sosText::ui::MainWindow::allFilesSaved()
{
}

void sosText::ui::MainWindow::connectActions()
{
    connect(ui->actionShow_Welcome_Tab, &QAction::triggered, this, &MainWindow::requestWelcomeTabSignal);
    connect(ui->action_New_File, &QAction::triggered, this, &MainWindow::requestFileTabSignal);
    connect(ui->actionNew_Project, &QAction::triggered, this, &MainWindow::requestNewProjectSignal);
    connect(ui->actionOpen_File, &QAction::triggered, this, &MainWindow::requestOpenFileDialogSignal);
    connect(ui->actionSave_File, &QAction::triggered, this, &MainWindow::fileSaved);
    // connect(ui->actionSave_As, &QAction::triggered, this, &MainWindow);
    connect(ui->actionSave_All, &QAction::triggered, this, &MainWindow::allFilesSaved);
    connect(ui->actionSettings_Preferences, &QAction::triggered, this, &MainWindow::requestSettingsWindowSignal);
    connect(ui->actionE_xit, &QAction::triggered, this, &MainWindow::close);
    connect(ui->filesTabs, &QTabWidget::tabCloseRequested, this, &MainWindow::closeTab);
}