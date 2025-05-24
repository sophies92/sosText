#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H

#include <vector>
#include <string>
#include <filesystem>
#include <fstream>

#include <QDialog>
#include <QMainWindow>
#include <QFileSystemModel>
#include <QListWidgetItem>
#include <QFileSelector>

#include "../mainWindow/mainWindow.h"
#include "../../project/project.h"
#include "../../project/file.h"

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

    // Public functions
    public:
    LoadFileDialogWindow(QMainWindow *parent = nullptr, Project::IProject *currentProject = nullptr);
    ~LoadFileDialogWindow();

    // Public UI slots
    public slots:
    void onDirListClick(QModelIndex index);
    void openFileButton();

    signals:
    // TODO change it emit path
    void projectOpened(Project::IProject *project);

    // Private functions
    private:
    void updateUIPathView();

};

#endif // LOADFILEDIALOGWINDOW_H
