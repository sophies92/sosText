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
    void closeTab(int index);

    void newFileStarted();
    void startNewProjectSelected();
    void openFileDialogSelected();

    void fileOpened(std::filesystem::path *path);
    void projectOpened(std::filesystem::path *path);

    signals:
    void openFileDialogSelectedSignal();
    void startNewProjectSelectedSignal();

    private:
    void addNewFileTab(Project::File *file);
};

#endif // MAINWINDOW_H
