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

int MainWindow::showLoadDialog()
{
    loadDialogWindow = new LoadDialogWindow();
    loadDialogWindow->show();
    return(0);
}

QWidget *MainWindow::getTextBox()
{
    return ui->textEdit;
}
