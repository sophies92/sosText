#include "loadDialogWindow.h"
#include "ui_loadDialogWindow.h"

LoadDialogWindow::LoadDialogWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::LoadDialogWindow)
{
    LoadDialogWindow::ui->setupUi(this);
}

LoadDialogWindow::~LoadDialogWindow()
{
    delete ui;
}
