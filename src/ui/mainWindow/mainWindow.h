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

#include "../fileBrowserWindow/fileBrowserWindow.h"
#include "../filesTabs/welcomeTab/welcomeTab.h"
#include "../filesTabs/newFileTab/newFileTab.h"

#include "../../project/file.h"

namespace Ui
{
    class MainWindow;
}

namespace sosText
{
    namespace ui
    {   
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
            /**
             * @fn ~MainWindow()
             * @brief The destructor for MainWindow
             */
            ~MainWindow();
            /**
             * @fn
             * @brief
             */
            Ui::MainWindow *getUi();

            /**
             * @fn
             * @brief
             * @param
             * @return
             */
            QPlainTextEdit *getOutputBox();

            // Public Slots
            public slots:
            /**
             * @fn addNewWelcomeTab(WelcomeTab *tab)
             * @brief Adds a new WelcomeTab to the file viewer.
             * @param tab A pointer to the tab to be added.
             */
            void addNewWelcomeTab(WelcomeTab *tab);
            /**
             * @fn
             * @brief
             */
            void addNewFileTab(NewFileTab *tab);
            /**
             * @fn
             * @brief
             */
            void closeTab(int index);
            /**
             * @fn
             * @brief
             */
            void fileOpened(std::filesystem::path *path);
            /**
             * @fn
             * @brief
             */
            void projectOpened(std::filesystem::path *path);
            /**
             * @fn
             * @brief
             */
            void fileSaved();
            /**
             * @fn
             * @brief
             */
            void allFilesSaved();

            signals:
            /**
             * @fn requestOpenFileDialogSignal()
             * @brief Send a request for the Open-File Dialog window to be shown.
             */
            void requestOpenFileDialogSignal();
            /**
             * @fn
             * @brief
             */
            void requestNewProjectSignal();
            /**
             * @fn
             * @brief
             */
            void requestWelcomeTabSignal();
            /**
             * @fn
             * @brief
             */
            void requestFileTabSignal();
            /**
             * @fn
             * @brief
             */
            void requestSettingsWindowSignal();

            /**
             * @fn
             * @brief
             */
            void requestPrintToOutput(std::string text);



            private:
            
            /**
             * @fn
             * @brief
             */
            void connectActions();

            
        };
    }
}
#endif // MAINWINDOW_H
