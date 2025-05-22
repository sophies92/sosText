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
}

void LoadFileDialogWindow::filesListItemClicked(QListWidgetItem *listItem)
{
}

void LoadFileDialogWindow::onStart()
{
}

void LoadFileDialogWindow::populateFilesList()
{
}
