/**
 * @file app.h
 * @brief This is where everything to do with the application is declared.
 * @author Sophie Short
 */
#ifndef APP_H
#define APP_H

#include <iostream>
#include <filesystem>

#include <QObject>

#include "../ui/mainWindow/mainWindow.h"
#include "../ui/fileBrowserWindow/fileBrowserWindow.h"
#include "../ui/newProjectWindow/newProjectWindow.h"
#include "../ui/settingsWindow/settingsWindow.h"

#include "../project/project.h"
#include "../settings/appSettings.h"
#include "../outputTerminal/outputTerminal.h"

namespace sosText
{
    namespace app
    {
        /**
         * @class App
         * @brief This class controls the App.
         * @details This is where UI windows send requests, where they are processed, and returned to the relevant UI windows.
         */
        class App : public QObject
        {
            Q_OBJECT

            // Public Variables
            public:


            
            // Private Variables
            private:
            sosText::ui::MainWindow *mainWindow;                        //!< A pointer to the MainWindow of the App
            sosText::ui::FileBrowserWindow *fileBrowserWindow;    //!< A pointer to the FileBrowserWindow
            sosText::ui::NewProjectWindow *newProjectWindow;
            sosText::ui::SettingsWindow *settingsWindow;                //!< A pointer to the SettingsWindow
            
            sosText::settings::AppSettings *appSettings;                //!< A pointer to the AppSettings
            sosText::output::OutputTerminal *outputTerminal;            //!< A pointer to the OutputTermianl object



            // Public Functions
            public:

            /**
             * @fn App(QObject *parent = nullptr)
             * @brief The constructor for the class
             * @param parent A pointer to the parent object. Default=nullptr
             */
            App(QObject *parent = nullptr);

            /**
             * @fn ~App()
             * @brief The destructor for the class
             * @param none
             */
            ~App();



            // Private Functions
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

            /**
             * @fn
             * @brief
             * @param
             * @return
             */
            sosText::output::OutputTerminal *createNewOutputTerminal();



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
             * @fn getAllSettingsRequested()
             * @brief
             * @param none
             * @return none
             */
            void getAllSettingsRequested();

            /**
             * @fn saveSettingsRequested()
             * @brief
             * @param none
             * @return none
             */
            void saveSettingsRequested();

            /**
             * @fn setDefaultSettingsRequested()
             * @brief
             * @param none
             * @return none
             */
            void setDefaultSettingsRequested();

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
             * @param path a pointer to the path where the file can be found
             * @return none
             */
            void fileOpened(std::filesystem::path *path);



            // Signals
            signals:

            /**
             * @fn fileOpenedSignal(NewFileTab *tab)
             * @brief sends out a signal with a tab contaning a newly opened file
             */
            void fileOpenedSignal(NewFileTab *tab);

            /**
             * @fn projectOpenedSignal(std::filesystem::path *path)
             * @brief sends out a signal containg a pointer to the open project
             */
            void projectOpenedSignal(std::filesystem::path *path);

            /**
             * @fn newWelcomeTabSignal(WelcomeTab *tab)
             * @brief sends out a signal containing a WelcomeTab
             */
            void newWelcomeTabSignal(sosText::ui::WelcomeTab *tab);

            /**
             * @fn newFileTabSignal(NewFileTab *tab)
             * @brief sends out a signal containing a newly created NewFileTab
             */
            void newFileTabSignal(NewFileTab *tab);

            /**
             * @fn settingsRequestReturnSignal(std::map<std::string, sosText::settings::Setting> *allSettings)
             * @brief sends out a signal containing a pointer to the settings map
             */
            void settingsRequestReturnSignal(std::map<std::string, sosText::settings::Setting *> *allSettings);

            /**
             * @fn requestPrintToOutput(std::string text)
             * @brief sends a request to print to the ouput terminal
             */
            void requestPrintToOutput(std::string text);
        };
    }
}
#endif // APP_H