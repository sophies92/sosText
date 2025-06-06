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
#include "../settings/appSettings.h"

namespace sosText
{
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

            // Private Variables
            private:
            sosText::ui::MainWindow *mainWindow;                        //!< A pointer to the MainWindow of the App
            sosText::ui::LoadFileDialogWindow *loadFileDialogWindow;    //!< A pointer to the LoadFileDialogWindow
            SettingsWindow *settingsWindow;                             //!< A pointer to the SettingsWindow
            
            sosText::settings::AppSettings *appSettings;                //!< A pointer to the AppSettings

            // Public Functions
            public:
            /**
             * @fn App(QObject *parent = nullptr)
             * @brief The constructor for the class
             * @param parent A pointer to the parent QObject. Default=nullptr
             */
            App(QObject *parent = nullptr);
            /**
             * @fn ~App()
             * @brief The destructor for the class
             * @param none
             */
            ~App();

            private:
            /**
             * @fn createNewFileTab()
             * @brief Creates and return a NewFileTab object
             * @param none
             * @return A pointer to the NewFileTab object that has been created
             */
            NewFileTab *createNewFileTab();
            /**
             * @fn createNewAppSettings()
             * @brief Creates and returns a new AppSettings object
             * @param none
             * @return A pointer to the AppSettings object that has been created
             */
            sosText::settings::AppSettings *createNewAppSettings();

            // Public Slots
            public slots:
            /**
             * @fn mainWindowRequested()
             * @brief answers a request to display the MainWindow
             * @param none
             * @return none
             */
            void mainWindowRequested();
            /**
             * @fn openFileDialogRequested()
             * @brief answers a request to display the OpenFileDialogWindow
             * @param none
             * @return none
             */
            void openFileDialogRequested();
            /**
             * @fn newProjectWindowRequested()
             * @brief answers a request to show a NewProjectWindow
             * @param none
             * @return none
             */
            void newProjectWindowRequested();
            /**
             * @fn welcomeTabRequested()
             * @brief answers a request to show a WelcomeTab
             * @param none
             * @return none
             */
            void welcomeTabRequested();
            /**
             * @fn settingsWindowRequested()
             * @brief answers a request to show the SettingsWindow
             * @param none
             * @return none
             */
            void settingsWindowRequested();
            /**
             * @fn fileStarted()
             * @brief creates a NewFileTab when a new file is started
             * @param none
             * @return none
             */
            void fileStarted();
            /**
             * @fn fileOpened(std::filesystem::path *path)
             * @brief creates a NewFileTab when a file is opened
             * @param none
             * @return none
             */
            void fileOpened(std::filesystem::path *path);

            // Signals
            signals:
            /**
             * @fn fileOpenedSignal(NewFileTab *tab)
             * @brief sounds out a signal with a tab contaning a newly opened file
             * @param none
             * @return none
             */
            void fileOpenedSignal(NewFileTab *tab);
            /**
             * @fn projectOpenedSignal(std::filesystem::path *path)
             * @brief 
             * @param none
             * @return none
             */
            void projectOpenedSignal(std::filesystem::path *path);
            /**
             * @fn newWelcomeTabSignal(WelcomeTab *tab)
             * @brief sends out a signal containing a WelcomeTab
             * @param none
             * @return none
             */
            void newWelcomeTabSignal(WelcomeTab *tab);
            /**
             * @fn newFileTabSignal(NewFileTab *tab)
             * @brief sends out a signal containing a newly created NewFileTab
             * @param tab the NewFileTab to be sent out
             * @return none
             */
            void newFileTabSignal(NewFileTab *tab);
        };
    }
}
#endif // APP_H