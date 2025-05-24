#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);

    WelcomeTab *welcomeTab = new WelcomeTab();
    int index = ui->filesTabs->addTab(welcomeTab, "Welcome");
    ui->filesTabs->setCurrentIndex(index);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFileDialog()
{
    emit openFileDialogClicked();
}

void MainWindow::updateProject(Project::IProject *project)
{
    if(project->getProjectType() == Project::ProjectType::FILE)
    {
        NewFileTab *newFileTab = new NewFileTab();
        newFileTab->textEdit->setText(project->getOpenFile()->c_str());
        int tabIndex = ui->filesTabs->addTab(newFileTab, project->getPath()->filename().c_str());
        ui->filesTabs->setCurrentIndex(tabIndex);
    }
    else if(project->getProjectType() == Project::ProjectType::PROJECT)
    {
        // make project tree
    }
}

void MainWindow::closeTab(int index)
{
    ui->filesTabs->removeTab(index);
}
