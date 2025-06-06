#ifndef LOADFILEDIALOGWINDOW_H
#define LOADFILEDIALOGWINDOW_H

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
    class LoadFileDialogWindow;
}

namespace sosText
{
    namespace ui
    {
        class LoadFileDialogWindow : public QDialog
        {
            Q_OBJECT

            // Public variables

            // Private variables
            Ui::LoadFileDialogWindow *ui;

            std::filesystem::path *path;
            QFileSystemModel *filesModel;

            // Public functions
            public:
            /**
             * @fn
             * @brief
             */
            LoadFileDialogWindow(QMainWindow *parent = nullptr);
            /**
             * @fn
             * @brief
             */
            ~LoadFileDialogWindow();

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
#endif // LOADFILEDIALOGWINDOW_H
