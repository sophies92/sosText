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

// TODO needs pointer to text tabs
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

    searchButton = new QPushButton(this);
    searchButton->setText("Find Next");
    connect(searchButton, &QPushButton::clicked, this, &Sosware::SosText::FindToolbar::searchText);

    numberFoundLabel = new QLabel(this);
    numberFoundLabel->setText("0 of 0");

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
    this->addWidget(numberFoundLabel);
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
    delete numberFoundLabel;
    delete isCaseSensativeLabel;
    delete isCaseSensativeBox;
    delete isWholeWordsOnlyLabel;
    delete isWholeWordsOnlyBox;
}

void Sosware::SosText::FindToolbar::searchText()
{
    emit searchCurrentTabSignal(findTextbox->text());
}

void Sosware::SosText::FindToolbar::resetFindCounter()
{
    stringMatchesFound = 0;
}
