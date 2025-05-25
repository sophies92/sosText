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
    void showWelcomeTab();
    void addNewFileTab(Project::File *file);
    void closeTab(int index);

    void newFileStarted();
    void newProjectStarted();
    void openFileDialog();

    signals:
    void openFileDialogClicked();
};

#endif // MAINWINDOW_H
