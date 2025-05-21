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

void LoadFileDialogWindow::filesListItemClicked(QListWidgetItem *listItem)
{
    ui->filepath->setPlainText(currentDirectoryString + listItem->text());
    // if directory

    // if file
}

void LoadFileDialogWindow::onStart()
{
    // set current directory path
    currentDirectory = "/";
    // set current directory string
    currentDirectoryString = currentDirectory.c_str();
    // set directory string to display in UI
    ui->filepath->setPlainText(currentDirectoryString);

    // make new list of files
    currentDirectoryFiles = new std::vector<std::filesystem::directory_entry>();
    // iterate through the current directory
    for(std::filesystem::directory_entry file : std::filesystem::directory_iterator(this->currentDirectory))
    {
        // add any found files to files list
        currentDirectoryFiles->push_back(file);

        // create a new QListWidgetItem
        QListWidgetItem *fileItem = new QListWidgetItem();
        // set text of that item to filename
        fileItem->setText(file.path().filename().c_str());
        // add item to UI files list
        ui->files->addItem(fileItem);
    }
}