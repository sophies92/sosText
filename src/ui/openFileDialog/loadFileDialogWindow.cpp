#include "loadFileDialogWindow.h"
#include "ui_loadFileDialogWindow.h"

LoadFileDialogWindow::LoadFileDialogWindow(QMainWindow *parent, Project::Project *project) : QDialog(parent), ui(new Ui::LoadFileDialogWindow)
{
    LoadFileDialogWindow::ui->setupUi(this);
    path = new std::vector<std::string>();
    path->push_back("/");
    filesModel = new QFileSystemModel();
    filesModel->setRootPath(ui->filepath->toPlainText());
    ui->directories->setModel(filesModel);
    ui->directories->expandToDepth(0);
    updateUIPathView();
    updateUIFilesView();
}

LoadFileDialogWindow::~LoadFileDialogWindow()
{
    delete path;
    delete ui;
}

void LoadFileDialogWindow::cancelButton()
{

}

void LoadFileDialogWindow::onDirListClick(QModelIndex index)
{
    if(filesModel->isDir(index))
    {
        
    }
    
    updateUIPathView();
    updateUIFilesView();
}

void LoadFileDialogWindow::onFileListClick(QListWidgetItem *item)
{
    updateUIPathView();
    ui->filepath->setPlainText(ui->filepath->toPlainText() + item->text());
}

void LoadFileDialogWindow::openFileButton()
{
    
}

void LoadFileDialogWindow::upButton()
{
    if(path->size() > 1)
    {
        path->pop_back();
    }
    updateUIPathView();
    updateUIFilesView();
}

void LoadFileDialogWindow::updateUIPathView()
{
    // Update Path
    std::filesystem::path newPath;
    for(std::string ele : *path)
    {
        newPath += ele;
    }
    ui->filepath->setPlainText(newPath.c_str());
}

void LoadFileDialogWindow::updateUIFilesView()
{
    // Update Files View
    ui->files->clear();
    for(std::filesystem::directory_entry e : std::filesystem::directory_iterator(ui->filepath->toPlainText().toStdString()))
    {
        if(e.is_regular_file())
        {
            QListWidgetItem *q = new QListWidgetItem();
            q->setText(e.path().filename().c_str());
            ui->files->addItem(q);
        }
    }
}
