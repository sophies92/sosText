#ifndef APPMANAGER_H
#define APPMANAGER_H

#include "../ui/mainWindow/mainWindow.h"
#include "../ui/openFileDialog/loadFileDialogWindow.h"

namespace Utils
{
    class AppManager
    {
        public:

        private:
        // UI Windows
        MainWindow *mainWindow;
        LoadFileDialogWindow *loadFileWindow;

        public:
        AppManager();
        ~AppManager();

        private:
    };
}

#endif // APPMANAGER_H