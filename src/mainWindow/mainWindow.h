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
    #include "../findToolbar/findToolbar.h"
    #include "../settingsWindow/settingsWindow.h"
    #include "../settings/settings.h"
    #include "../aboutWindow/aboutWindow.h"

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
                Sosware::SosText::FindToolbar *findToolbar = nullptr;
                Sosware::SosText::SettingsWindow *settingsWindow = nullptr;
                Sosware::SosText::Settings *appSettings = nullptr;
                Sosware::SosText::AboutWindow *aboutWindow = nullptr;

                public:
                MainWindow(QWidget *parent = nullptr);
                ~MainWindow();

                /**
                 * @fn updateWindowName(int tabIndex)
                 * @brief Update the name of the window
                 * @param tabIndex The Filename of the tab(filename) to name the window after. If no tabs are open, default is used;
                 */
                void updateWindowName(int tabIndex);

                /**
                 * @fn connectSlots()
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
                 * @fn closeTab(int index)
                 * @brief Closes a TextEditTab
                 * @param index The index of the TextEditTab to be closed
                 */
                void closeTab(int index);

                /**
                 * @fn updateTabText(int index, QString text)
                 * @brief
                 */
                void updateTabText(int index, QString text);

                /**
                 * @fn markTabUnsaved()
                 * @brief Mark a TextEditTab as unsaved
                 */
                void markTabUnsaved();

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
                void launchFindToolbar();

                /**
                 * @fn
                 * @brief
                 */
                void launchSettingsWindow();

                /**
                 * @fn
                 * @brief
                 */
                void launchAboutWindow();

                // SIGNALS
                signals:

                /**
                 * 
                 */
                void requestUpdateWindowName(QString newWindowName);

                void requestCurrentTabSearchText(QString searchTerm);

                // SLOTS
                public slots:

                /**
                 * 
                 */
                void searchCurrentTabText(QString searchTerm);
            };
        }
    }

#endif