/**
 * @file mainWindow.h
 * @brief
 * @author Sophie Short
 */
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

/**
 * @class MainWindow
 * @brief
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

    // Private Variables
    private:
    Ui::MainWindow *ui;                                             //!< a pointer to the UI element

    // Public Functions
    public:
    /**
     * @fn MainWindow(QWidget *parent = nullptr)
     * @brief The constructor for the MainWindow class
     * @param parent A pointer to the parent QWidget. default = null
     */
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *getUi();

    // Public Slots
    public slots:
    /**
     * @fn addNewWelcomeTab(WelcomeTab *tab)
     * @brief Adds a new WelcomeTab to the file viewer.
     * @param tab A pointer to the tab to be added.
     */
    void addNewWelcomeTab(WelcomeTab *tab);
    void addNewFileTab(NewFileTab *tab);
    void closeTab(int index);

    void startNewProjectSelected();
    void openFileDialogSelected();

    void fileOpened(std::filesystem::path *path);
    void projectOpened(std::filesystem::path *path);

    void fileSaved();
    void allFilesSaved();

    signals:
    /**
     * @fn requestOpenFileDialogSignal()
     * @brief Send a request for the Open-File Dialog window to be shown.
     */
    void requestOpenFileDialogSignal();
    void requestNewProjectSignal();
    void requestWelcomeTabSignal();
    void requestFileTabSignal();

    private:
    
};

#endif // MAINWINDOW_H
