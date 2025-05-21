#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);
    onStart();
}

LoadFileDialogWindow::~LoadFileDialogWindow()
{
    delete ui;
}

void LoadFileDialogWindow::openFileButton()
{
    close();
}

void LoadFileDialogWindow::onStart()
{
    currentDirectory = "$HOME";
    currentDirectoryString = currentDirectory.c_str();
    ui->filepath->setPlainText(currentDirectoryString);
}