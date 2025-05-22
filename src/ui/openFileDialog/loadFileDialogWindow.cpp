#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);

}

LoadFileDialogWindow::~LoadFileDialogWindow()
{
    delete ui;
}

void LoadFileDialogWindow::openFileButton()
{
}
