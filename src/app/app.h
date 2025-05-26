/**
 * @file app.h
 * @brief the base app that controld everything
 * @author Sophie Short
 */
#ifndef APP_H
#define APP_H

#include <iostream>
#include <filesystem>

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
        void showLoadFileDialogWindow();
        void showNewProjectWindow();
        void fileOpened(std::filesystem::path *path);

        // Signals
        signals:
        void fileOpenedSignal(std::filesystem::path *path);
        void projectOpenedSignal(std::filesystem::path *path);

        // Private Functions
        private:
        void showMainWindow();
        
    };
}

#endif // APP_H