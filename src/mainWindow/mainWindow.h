/* 
    sosText - A text editor.
    Copyright (C) 2025  Sophie Short / sosware

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef MAINWINDOW
#define MAINWINDOW
    #include <QMainWindow>
    #include <QFileDialog>
    #include <QString>
    #include <QPlainTextEdit>
    #include <QTabBar>
    #include "../textEditTab/textEditTab.h"
    #include "../settingsWindow/settingsWindow.h"
    #include "../settings/settings.h"
    namespace Ui
    {
        class MainWindow;
    }

    namespace Sosware
    {
        namespace SosText
        {
            /**
             * @class MainWindow
             * @brief
             */
            class MainWindow : public QMainWindow
            {
                Q_OBJECT

                private:
                Ui::MainWindow *ui;
                Sosware::SosText::SettingsWindow *settingsWindow;
                Sosware::SosText::Settings *appSettings;

                public:
                MainWindow(QWidget *parent = nullptr);
                ~MainWindow();

                /**
                 * @fn
                 * @brief Connect the slots needed for the program to work
                */
                void connectSlots();

                /**
                 * @fn createTextEditTab(QString path = nullptr)
                 * @brief Creates a new TextEditTab
                 * @param path (Optional) The path to the file to be opened. If blank, a new file will be created
                */
                void createTextEditTab(QString path = nullptr);

                /**
                 * @fn 
                 * @brief Closes a TextEditTab
                 * @param index The index of the TextEditTab to be closed
                 */
                void closeTab(int index);

                /**
                 * 
                 */
                void updateTabText(int index, QString text);

                /**
                 * @fn
                 * @brief Mark a TextEditTab as unsaved
                 * @param index The index of the TextEditTab to be marked
                 */
                void markTabUnsaved(int index);

                /**
                 * @fn
                 * @brief
                 */
                void markTabSaved(int index);

                /**
                 * @fn
                 * @brief
                 */
                void newFile();

                /**
                 * @fn
                 * @brief
                 */
                void openFile();

                /**
                 * @fn
                 * @brief
                 */
                void openFileFromPath(char *path);

                /**
                 * @fn
                 * @brief
                 */
                void saveFile();

                /**
                 * @fn
                 * @brief
                 */
                void saveFileAs();

                /**
                 * @fn
                 * @brief
                 */
                void launchSettingsWindow();
            };
        }
    }

#endif