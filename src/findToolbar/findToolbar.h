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

#ifndef FINDTOOLBAR
#define FINDTOOLBAR
    #include <QToolBar>
    #include <QMainWindow>
    #include <QLabel>
    #include <QLineEdit>
    #include <QPushButton>
    #include <QCheckBox>
    namespace Sosware
    {
        namespace SosText
        {
            struct StringMatch
            {
                int tabIndex = 0;
                int startPosition = 0;
                int endPosition = 0;
            };

            class FindToolbar : public QToolBar
            {
                Q_OBJECT

                private:
                QTabWidget *tabs = nullptr;
                QLabel *findBoxLabel = nullptr;
                QLineEdit *findTextbox = nullptr;
                QPushButton *searchButton = nullptr;
                QLabel *selectedOfNumberFound = nullptr;
                QLabel *ofNumberFoundLabel = nullptr;
                QLabel *numberFoundLabel = nullptr;
                QPushButton *nextButton = nullptr;
                QPushButton *prevButton = nullptr;
                QLabel *isCaseSensativeLabel = nullptr;
                QCheckBox *isCaseSensativeBox = nullptr;
                QLabel *isWholeWordsOnlyLabel = nullptr;
                QCheckBox *isWholeWordsOnlyBox = nullptr;

                std::vector<StringMatch> *stringMatchesList = nullptr;
                int stringMatchesFound = 0;
                int currentMatchIndex = 0;


                public:
                FindToolbar(QMainWindow *parent = nullptr);
                ~FindToolbar();

                QCheckBox* getIsCaseSensativeBox();
                QCheckBox* getIsWholeWordsOnlyBox();

                void setMatchesList(std::vector<StringMatch> *matchesList);
                void setNumberFoundLabelText(int numberFound);
                void setCurrentIndexLabelText(int number);

                private:
                void searchText();
                void resetFindToolbar();
                void nextButtonPressed();
                void prevButtonPressed();

                signals:
                void requestSearchCurrentTabSignal(QString serachTerm);
                void requestMoveCursorPosition(Sosware::SosText::StringMatch match);
            };
        }
    }
#endif