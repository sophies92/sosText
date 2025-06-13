#ifndef FILEBROWSWERWINDOW_H
#define FILEBROWSWERWINDOW_H

#include <vector>
#include <string>
#include <filesystem>
#include <fstream>

#include <QDialog>
#include <QMainWindow>
#include <QFileSystemModel>
#include <QListWidgetItem>
#include <QFileSelector>

#include "../mainWindow/mainWindow.h"
#include "../../project/project.h"
#include "../../project/file.h"

namespace Ui
{
    class FileBrowserWindow;
}

namespace sosText
{
    namespace ui
    {
        class FileBrowserWindow : public QDialog
        {
            Q_OBJECT

            // Public variables

            // Private variables
            Ui::FileBrowserWindow *ui;

            std::filesystem::path *path;
            QFileSystemModel *filesModel;

            // Public functions
            public:
            /**
             * @fn
             * @brief
             */
            FileBrowserWindow(QMainWindow *parent = nullptr);
            /**
             * @fn
             * @brief
             */
            ~FileBrowserWindow();

            /**
             * @file showDirectories(std::filesystem::path pathToRoot)
             * @brief
             * @param
             * @return
             */
            void showDirectories(std::filesystem::path pathToRoot);

            // Public UI slots
            public slots:
            /**
             * @fn
             * @brief
             */
            void onDirListClick(QModelIndex index);
            /**
             * @fn
             * @brief
             */
            void openFileButton();
            /**
             * @fn
             * @brief
             */
            void close();

            signals:
            /**
             * @fn
             * @brief
             */
            void fileOpened(std::filesystem::path *path);

            /**
             * @fn requestPrintToOutput(std::string text)
             * @brief sends a request to print to the ouput terminal
             */
            void requestPrintToOutput(std::string text);



            // Private functions
            private:

            /**
             * @fn
             * @brief
             */
            void updateUIPathView();

        };
    }
}
#endif // FILEBROWSWERWINDOW_H
