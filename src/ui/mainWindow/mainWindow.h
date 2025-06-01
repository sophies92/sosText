#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>

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
    Ui::MainWindow *getUi();

    // Public Slots
    public slots:
    void addNewWelcomeTab(WelcomeTab *tab);
    void addNewFileTab(NewFileTab *tab);
    void closeTab(int index);

    void startNewProjectSelected();
    void openFileDialogSelected();

    void fileOpened(std::filesystem::path *path);
    void projectOpened(std::filesystem::path *path);

    void fileSaved();

    signals:
    void requestOpenFileDialogSignal();
    void requestNewProjectSignal();
    void requestWelcomeTabSignal();
    void requestFileTabSignal();

    private:
    
};

#endif // MAINWINDOW_H
