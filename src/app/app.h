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

#include "../project/project.h"

namespace App
{
    class App : public QObject
    {
        Q_OBJECT

        // Public Variables
        public:
        MainWindow *mainWindow;
        LoadFileDialogWindow *loadFileDialogWindow;

        // Private Variables
        private:

        // Public Functions
        public:
        App(QObject *parent = nullptr);
        ~App();

        // Public Slots
        public slots:
        void showMainWindow();
        void openFileDialogRequested();
        void newProjectWindowRequested();
        void welcomeTabRequested();
        NewFileTab *fileTabRequested();

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