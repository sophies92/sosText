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

#include "lineNumberArea.h"

Sosware::SosText::LineNumberArea::LineNumberArea(QWidget *parent)
{
    vScrollBar = this->verticalScrollBar();
    this->setReadOnly(true);
    this->setMinimumWidth(20);
    this->setMaximumWidth(50);
    this->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
    this->setTextInteractionFlags(Qt::NoTextInteraction);
    this->setFocusPolicy(Qt::NoFocus);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setLineWrapMode(QPlainTextEdit::LineWrapMode::NoWrap);
}

Sosware::SosText::LineNumberArea::~LineNumberArea()
{

}

void Sosware::SosText::LineNumberArea::mouseDoubleClickEvent(QMouseEvent *event)
{
    int blockNumber = this->cursorForPosition(event->pos()).blockNumber();
    emit requestSelectBlockInText(blockNumber);
}
