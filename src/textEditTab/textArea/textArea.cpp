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

#include "textArea.h"

Sosware::SosText::TextArea::TextArea(QWidget *parent)
{
    vScrollBar = this->verticalScrollBar();
    
    this->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);    

    // TODO get font from settings
    setNewFont(4);
}

Sosware::SosText::TextArea::~TextArea()
{
}

void Sosware::SosText::TextArea::updateTabSpace(int tabSpaces)
{
    QFontMetrics fm(this->font());
    this->setTabStopDistance(fm.horizontalAdvance(" ") * tabSpaces);
}

void Sosware::SosText::TextArea::setNewFont(int tabSpaces)
{
    QFont f("Monospace");
    f.setStyleHint(QFont::Monospace);
    this->setFont(f);
    updateTabSpace(tabSpaces);
}

void Sosware::SosText::TextArea::setNewFont(QFont font, int tabSpaces)
{
    this->setFont(font);
    updateTabSpace(tabSpaces);
}