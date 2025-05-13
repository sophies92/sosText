#include <fstream>

#include <QString>

#include "loadDialogWindow.h"
#include "ui_loadDialogWindow.h"

LoadDialogWindow::LoadDialogWindow(QMainWindow *parent) : QDialog(parent), ui(new Ui::LoadDialogWindow)
{
    LoadDialogWindow::ui->setupUi(this);
    filePathText = ui->filepath;
}

LoadDialogWindow::~LoadDialogWindow()
{
    delete ui;
}

void LoadDialogWindow::loadFile()
{
    QString filePath = filePathText->toPlainText();
    this->~LoadDialogWindow();
}
