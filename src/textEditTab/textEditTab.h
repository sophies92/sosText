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
#ifndef TEXTEDITTAB
#define TEXTEDITTAB
    #include <filesystem>
    #include <QWidget>
    #include <QScrollBar>
    #include <QString>
    #include <QFile>
    #include <QFileDialog>
    #include <QLayout>
    #include "textArea/textArea.h"
    #include "lineNumberArea/lineNumberArea.h"
    #include "../findToolbar/findToolbar.h"
    namespace Sosware
    {
        namespace SosText
        {
            class TextEditTab : public QWidget
            {
                Q_OBJECT
                private:
                QHBoxLayout *layout = nullptr;
                QString filepath;
                
                public:
                Sosware::SosText::TextArea *textArea = nullptr;
                Sosware::SosText::LineNumberArea *lineNumberArea = nullptr;

                public:
                TextEditTab(QWidget *parent = nullptr);
                ~TextEditTab();

                void setFilepath(QString path);
                QString getFilename();
                
                int openFile(QString path);
                int saveFile();

                void updateFont(QFont newFont, int tabSpaces);
                void updateLineCount(int lines);
                void updateScroll(int value);

                std::vector<Sosware::SosText::StringMatch> findInText(QString textToFind, bool isCaseSensative, bool onlyWholeWords);

                void goToPositionInText(int startPosition, int endPosition);

                signals:
                void requestSetting(QString settingString);
            };
        }
    }

#endif