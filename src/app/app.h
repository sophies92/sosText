/**
 * @file app.h
 * @brief the base app that controld everything
 * @author Sophie Short
 */
#ifndef APP_H
#define APP_H

#include <iostream>
#include <filesystem>
#include <vector>

#include <QObject>

#include "../ui/mainWindow/mainWindow.h"
#include "../ui/openFileDialog/loadFileDialogWindow.h"
#include "../ui/settingsWindow/settingsWindow.h"

#include "../project/project.h"

namespace App
{
    /**
     * @class App
     * @brief This class controls the App
     */
    class App : public QObject
    {
        Q_OBJECT

        // Public Variables
        public:
        MainWindow *mainWindow;                         //!< A pointer to the MainWindow of the App
        LoadFileDialogWindow *loadFileDialogWindow;     //!< A pointer to the LoadFileDialogWindow
        SettingsWindow *settingsWindow;                 //!< A pointer to the SettingsWindow

        // Private Variables
        private:

        // Public Functions
        public:
        /**
         * @fn App(QObject *parent = nullptr)
         * @brief The constructor for the class
         */
        App(QObject *parent = nullptr);
        ~App();

        private:
        NewFileTab *createNewFileTab();

        // Public Slots
        public slots:
        void mainWindowRequested();
        void openFileDialogRequested();
        void newProjectWindowRequested();
        void welcomeTabRequested();
        void settingsWindowRequested();
        void fileStarted();
        void fileOpened(std::filesystem::path *path);

        // Signals
        signals:
        void fileStartedSignal();
        void fileOpenedSignal(NewFileTab *tab);
        void projectOpenedSignal(std::filesystem::path *path);

        void newWelcomeTabSignal(WelcomeTab *tab);
        void newFileTabSignal(NewFileTab *tab);
    };
}

#endif // APP_H