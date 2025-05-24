#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);
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
        int tabIndex = ui->tabWidgetOpenFiles->tabBar()->addTab(project->getPath()->filename().c_str());
        // set tab contets
        ui->tabWidgetOpenFiles->tabBar()->setCurrentIndex(tabIndex);
    }
}

void MainWindow::closeTab(int index)
{
    ui->tabWidgetOpenFiles->tabBar()->removeTab(index);
}
