#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

#include "../openFileDialog/loadFileDialogWindow.h"
#include "../filesTabs/welcomeTab/welcomeTab.h"
#include "../filesTabs/newFileTab/newFileTab.h"

#include "../../project/file.h"

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
    void closeTab(int index);
    void showWelcomeTab();

    void newFileStarted();
    void fileOpened();
    void newProjectStarted();
    void projectOpened();

    signals:
    void openFileDialogClicked();

    // Private functions
    private:
    void addNewFileTab(Project::File *file);
};

#endif // MAINWINDOW_H
