#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "../openFileDialog/loadFileDialogWindow.h"
#include "../filesTabs/welcomeTab/welcomeTab.h"
#include "../filesTabs/newFileTab/newFileTab.h"
#include "../../project/iProject.h"

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

    // Public Functions
    public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Public Slots
    public slots:
    void openFileDialog();
    void updateProject(Project::IProject *project);
    void closeTab(int index);

    signals:
    void openFileDialogClicked();

    // Private functions
    private:

};

#endif // MAINWINDOW_H
