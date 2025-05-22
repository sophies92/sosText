#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "../openFileDialog/loadFileDialogWindow.h"
#include "../../project/project.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    // Public Variables

    // Private Variables
    private:
    Ui::MainWindow *ui;

    LoadFileDialogWindow *loadFileDialogWindow;

    Project::Project *currentProject;

    // Public Functions
    public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Public Slots
    public slots:
    void *openFileDialog();

    // Private functions
    private:

};

#endif // MAINWINDOW_H
