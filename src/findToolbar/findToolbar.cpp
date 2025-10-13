#include "findToolbar.h"
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

Sosware::SosText::FindToolbar::FindToolbar(QMainWindow *parent) : QToolBar(parent)
{
    this->hide();
    this->setWindowTitle("Find");

    stringMatchesList = new std::vector<StringMatch>();

    findBoxLabel = new QLabel(this);
    findBoxLabel->setText("Find:");

    findTextbox = new QLineEdit(this);
    findTextbox->setMaximumWidth(300);
    connect(findTextbox, &QLineEdit::returnPressed, this, &Sosware::SosText::FindToolbar::searchText);
    connect(findTextbox, &QLineEdit::textChanged, this, &Sosware::SosText::FindToolbar::resetFindToolbar);

    searchButton = new QPushButton(this);
    searchButton->setText("Search");
    connect(searchButton, &QPushButton::clicked, this, &Sosware::SosText::FindToolbar::searchText);

    selectedOfNumberFound = new QLabel(this);
    selectedOfNumberFound->setText("0");

    ofNumberFoundLabel = new QLabel(this);
    ofNumberFoundLabel->setText(" of ");

    numberFoundLabel = new QLabel(this);
    numberFoundLabel->setText("0");

    nextButton = new QPushButton(this);
    nextButton->setText("Next");
    connect(nextButton, &QPushButton::clicked, this, &Sosware::SosText::FindToolbar::nextButtonPressed);

    prevButton = new QPushButton(this);
    prevButton->setText("Prev");
    connect(prevButton, &QPushButton::clicked, this, &Sosware::SosText::FindToolbar::prevButtonPressed);

    isCaseSensativeLabel = new QLabel(this);
    isCaseSensativeLabel->setText("Case sensative:");

    isCaseSensativeBox = new QCheckBox(this);
    isCaseSensativeBox->setCheckState(Qt::CheckState::Checked);

    isWholeWordsOnlyLabel = new QLabel(this);
    isWholeWordsOnlyLabel->setText("Whole words only:");

    isWholeWordsOnlyBox = new QCheckBox(this);
    isWholeWordsOnlyBox->setCheckState(Qt::CheckState::Checked);

    this->addWidget(findBoxLabel);
    this->addWidget(findTextbox);
    this->addWidget(searchButton);
    this->addWidget(selectedOfNumberFound);
    this->addWidget(ofNumberFoundLabel);
    this->addWidget(numberFoundLabel);
    this->addWidget(nextButton);
    this->addWidget(prevButton);
    this->addSeparator();
    this->addWidget(isCaseSensativeLabel);
    this->addWidget(isCaseSensativeBox);
    this->addWidget(isWholeWordsOnlyLabel);
    this->addWidget(isWholeWordsOnlyBox);
    

    parent->addToolBar(this);
}

Sosware::SosText::FindToolbar::~FindToolbar()
{
    delete findBoxLabel;
    delete findTextbox;
    delete searchButton;
    delete selectedOfNumberFound;
    delete ofNumberFoundLabel;
    delete numberFoundLabel;
    delete nextButton;
    delete prevButton;
    delete isCaseSensativeLabel;
    delete isCaseSensativeBox;
    delete isWholeWordsOnlyLabel;
    delete isWholeWordsOnlyBox;
}

QCheckBox* Sosware::SosText::FindToolbar::getIsCaseSensativeBox()
{
    return isCaseSensativeBox;
}

QCheckBox *Sosware::SosText::FindToolbar::getIsWholeWordsOnlyBox()
{
    return isWholeWordsOnlyBox;
}

void Sosware::SosText::FindToolbar::setMatchesList(std::vector<StringMatch>* matchesList)
{
    if(stringMatchesList != nullptr)
    {
        delete stringMatchesList;
        stringMatchesList = matchesList;
    }
    else
    {
        stringMatchesList = matchesList;
    }
    stringMatchesFound = stringMatchesList->size();
    setNumberFoundLabelText(stringMatchesFound);


    // TODO do stuff with the matches
    if(stringMatchesFound > 0)
    {
        setCurrentIndexLabelText(currentMatchIndex);
        emit requestMoveCursorPosition(stringMatchesList->at(currentMatchIndex));
    }
}

void Sosware::SosText::FindToolbar::setNumberFoundLabelText(int numberFound)
{
    stringMatchesFound = numberFound;
    numberFoundLabel->setText(QString::number(stringMatchesFound));
}

void Sosware::SosText::FindToolbar::setCurrentIndexLabelText(int number)
{
    selectedOfNumberFound->setText(QString::number(number + 1));
}

void Sosware::SosText::FindToolbar::searchText()
{
    currentMatchIndex = 0;
    stringMatchesFound = 0;
    emit requestSearchCurrentTabSignal(findTextbox->text());
}

void Sosware::SosText::FindToolbar::resetFindToolbar()
{
    currentMatchIndex = 0;
    stringMatchesFound = 0;
    setNumberFoundLabelText(stringMatchesFound);
    setCurrentIndexLabelText(-1);
}

void Sosware::SosText::FindToolbar::nextButtonPressed()
{
    // TODO change focus to text window when search/next/prev buttons are pressed
    if(stringMatchesFound > 0)
    {
        if(currentMatchIndex < (stringMatchesFound - 1))
        {
            currentMatchIndex++;
        }
        else if(currentMatchIndex == (stringMatchesFound - 1))
        {
            currentMatchIndex = 0;
        }
        setCurrentIndexLabelText(currentMatchIndex);
        emit requestMoveCursorPosition(stringMatchesList->at(currentMatchIndex));
    }
}

void Sosware::SosText::FindToolbar::prevButtonPressed()
{
    if(stringMatchesFound > 0)
    {
        if(currentMatchIndex > 0)
        {
            currentMatchIndex--;
        }
        else if(currentMatchIndex == 0)
        {
            currentMatchIndex = (stringMatchesFound - 1);
        }
        setCurrentIndexLabelText(currentMatchIndex);
        emit requestMoveCursorPosition(stringMatchesList->at(currentMatchIndex));
    }
}
