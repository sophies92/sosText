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
