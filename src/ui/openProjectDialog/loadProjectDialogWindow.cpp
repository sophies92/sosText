#include "loadProjectDialogWindow.h"
#include "ui_loadProjectDialogWindow.h"

LoadProjectDialogWindow::LoadProjectDialogWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::LoadProjectDialogWindow)
{
    LoadProjectDialogWindow::ui->setupUi(this);
}

LoadProjectDialogWindow::~LoadProjectDialogWindow()
{
    delete this;
}
