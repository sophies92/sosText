#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    MainWindow::ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showLoadFileDialog()
{
    loadDialogWindow = new LoadDialogWindow(this);
    loadDialogWindow->show();
}
