#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H

#include <vector>
#include <string>
#include <filesystem>

#include <QDialog>
#include <QMainWindow>
#include <QFileSystemModel>
#include <QListWidgetItem>
#include <QFileSelector>

#include "../../project/iProject.h"

namespace Ui
{
    class LoadFileDialogWindow;
}

class LoadFileDialogWindow : public QDialog
{
    Q_OBJECT

    // Public variables

    // Private variables
    Ui::LoadFileDialogWindow *ui;

    std::string *path;
    QFileSystemModel *filesModel;

    Project::IProject *project;

    // Public functions
    public:
    LoadFileDialogWindow(QMainWindow *parent = nullptr, Project::IProject *currentProject = nullptr);
    ~LoadFileDialogWindow();

    // Public UI slots
    public slots:
    void cancelButton();
    void onDirListClick(QModelIndex index);
    void openFileButton();
    void upButton();
    
    // Private functions
    private:
    void updateUIPathView();

};

#endif // LOADFILEDIALOGWINDOW_H
