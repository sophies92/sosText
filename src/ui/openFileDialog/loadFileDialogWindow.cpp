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
    std::ifstream(ui->filepath->toPlainText().toStdString());
    close();
}

void LoadFileDialogWindow::filesListItemClicked(QListWidgetItem *listItem)
{
    if(std::filesystem::is_directory(ui->filepath->toPlainText().toStdString() + listItem->text().toStdString()))
    {
        ui->filepath->setPlainText(currentDirectoryString + listItem->text() + "/");
        currentDirectory = ui->filepath->toPlainText().toStdString().c_str();
        currentDirectoryString = currentDirectory.c_str();
        populateFilesList();
    }
    else
    {
        ui->filepath->setPlainText(currentDirectoryString + listItem->text());
        Project::currentProject = new Project::File(ui->filepath->toPlainText().toStdString().c_str());
    }
}

void LoadFileDialogWindow::onStart()
{
    // set current directory path
    currentDirectory = "/";
    // set current directory string
    currentDirectoryString = currentDirectory.c_str();
    // set directory string to display in UI
    ui->filepath->setPlainText(currentDirectoryString);

    populateFilesList();
}

void LoadFileDialogWindow::populateFilesList()
{
    ui->files->clear();
    // iterate through the current directory
    for(std::filesystem::directory_entry file : std::filesystem::directory_iterator(this->currentDirectory))
    {
        // create a new QListWidgetItem
        QListWidgetItem *fileItem = new QListWidgetItem();
        // set text of that item to filename
        fileItem->setText(file.path().filename().c_str());
        // add item to UI files list
        ui->files->addItem(fileItem);
    }
}
