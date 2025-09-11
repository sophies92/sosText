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

                void connectSlots();

                void createTextEditTab(QString path = nullptr);
                void closeTab(int index);

                void newFile();
                void openFile();
                void openFileFromPath(char *path);
                void saveFile();
                void saveFileAs();

                void launchSettingsWindow();
            };
        }
    }

#endif