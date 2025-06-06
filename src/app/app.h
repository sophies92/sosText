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
             */
            ~App();

            private:
            /**
             * @fn createNewFileTab()
             * @brief Creates and return a NewFileTab
             * @return A pointer to the NewFileTab that has been created
             */
            NewFileTab *createNewFileTab();
            /**
             * @fn
             * @brief
             */
            sosText::settings::AppSettings *createNewAppSettings();

            // Public Slots
            public slots:
            /**
             * @fn
             * @brief
             */
            void mainWindowRequested();
            /**
             * @fn
             * @brief
             */
            void openFileDialogRequested();
            /**
             * @fn
             * @brief
             */
            void newProjectWindowRequested();
            /**
             * @fn
             * @brief
             */
            void welcomeTabRequested();
            /**
             * @fn
             * @brief
             */
            void settingsWindowRequested();
            /**
             * @fn
             * @brief
             */
            void fileStarted();
            /**
             * @fn
             * @brief
             */
            void fileOpened(std::filesystem::path *path);

            // Signals
            signals:
            /**
             * @fn
             * @brief
             */
            void fileStartedSignal();
            /**
             * @fn
             * @brief
             */
            void fileOpenedSignal(NewFileTab *tab);
            /**
             * @fn
             * @brief
             */
            void projectOpenedSignal(std::filesystem::path *path);
            /**
             * @fn
             * @brief
             */
            void newWelcomeTabSignal(WelcomeTab *tab);
            /**
             * @fn
             * @brief
             */
            void newFileTabSignal(NewFileTab *tab);
        };
    }
}
#endif // APP_H