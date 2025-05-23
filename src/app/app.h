/**
 * @file app.h
 * @brief the base app that controld everything
 * @author Sophie Short
 */
#ifndef APP_H
#define APP_H

#include <iostream>

#include <QObject>

#include "../ui/mainWindow/mainWindow.h"
#include "../ui/openFileDialog/loadFileDialogWindow.h"

#include "../project/iProject.h"

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
        Project::IProject *project;

        // Public Functions
        public:
        App(QObject *parent = nullptr);
        ~App();
        void setProject(Project::IProject *project);

        // Public Slots
        public slots:
        void showLoadFileDialogWindow();
        void projectOpened(Project::IProject *project);

        // Private Functions
        private:
        void showMainWindow();
        
    };
}

#endif // APP_H