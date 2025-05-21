#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H

#include <filesystem>
#include <vector>
#include <fstream>

#include <QDialog>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QString>
#include <QListWidgetItem>

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

    QString currentDirectoryString;
    std::filesystem::path currentDirectory;
    std::vector<std::filesystem::directory_entry> *currentDirectoryFiles;

    // Public functions
    public:
    LoadFileDialogWindow(QMainWindow *parent = nullptr);
    ~LoadFileDialogWindow();

    // Public UI slots
    public slots:
    void openFileButton();
    void filesListItemClicked(QListWidgetItem *listItem);

    // Private functions
    private:
    void onStart();

    void populateFilesList();
};

#endif // LOADFILEDIALOGWINDOW_H
