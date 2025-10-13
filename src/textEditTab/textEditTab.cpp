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

#include "textEditTab.h"

Sosware::SosText::TextEditTab::TextEditTab(QWidget *parent) : QWidget(parent)
{
    // Create Tab Contents
    lineNumberArea = new Sosware::SosText::LineNumberArea(this);
    textArea = new Sosware::SosText::TextArea(this);

    // Line count
    connect(textArea, &QPlainTextEdit::blockCountChanged, this, &Sosware::SosText::TextEditTab::updateLineCount);
    updateLineCount(textArea->blockCount());

    // Scrollbar sync
    connect(textArea->vScrollBar, &QScrollBar::valueChanged, this, &Sosware::SosText::TextEditTab::updateScroll);
    connect(textArea, &QPlainTextEdit::blockCountChanged, this, &Sosware::SosText::TextEditTab::updateScroll);


    // Create Tab Layout
    layout = new QHBoxLayout(this);
    // Set layout properties
    layout->setSpacing(2);
    layout->setContentsMargins(0, 0, 0, 0);
    // Add widgets to layout
    layout->addWidget(lineNumberArea);
    layout->addWidget(textArea);
    // Add layout
    this->setLayout(layout);
}

Sosware::SosText::TextEditTab::~TextEditTab()
{
    delete lineNumberArea;
    delete textArea;
    delete layout;
}

void Sosware::SosText::TextEditTab::setFilepath(QString path)
{
    filepath = path;
}

QString Sosware::SosText::TextEditTab::getFilename()
{
    std::filesystem::path path = filepath.toStdString();
    QString name = path.filename().c_str();
    return name;
}

int Sosware::SosText::TextEditTab::openFile(QString path)
{
    QFile qf(path);
    if(qf.open(QIODevice::ReadOnly))
    {
        QString qs = qf.readAll();
        textArea->clear();
        textArea->insertPlainText(qs);
        return 0;
    }
    else
    {
        // TODO Open file failed
        return 1;
    }
}

int Sosware::SosText::TextEditTab::saveFile()
{
    if(!filepath.isEmpty())
    {
        QFile qf(filepath);
        if(qf.open(QIODevice::WriteOnly))
        {
            
            if(qf.isWritable())
            {
                QString qs = textArea->toPlainText();
                qf.write(qs.toStdString().c_str());
                return 0;
            }
            else
            {
                // TODO Save file failed (no write access)
                return 1;
            }
        }
        else
        {
            // TODO Save file failed
            return 1;
        }
    }
    else
    {
        QFileDialog dialog;
        this->setFilepath(dialog.getSaveFileName());
        return(saveFile());
    }
    return 1;
}

void Sosware::SosText::TextEditTab::updateLineCount(int lines)
{
    QString lineNumbers;
    for(int i = 0; i < lines; ++i)
    {
        lineNumbers.append(std::to_string(i+1) + "~\n");
    }
    lineNumberArea->setPlainText(lineNumbers);
}

void Sosware::SosText::TextEditTab::updateScroll(int value)
{
    lineNumberArea->vScrollBar->setRange(textArea->vScrollBar->minimum(), textArea->vScrollBar->maximum());
    lineNumberArea->vScrollBar->setValue(textArea->vScrollBar->value());
}

std::vector<Sosware::SosText::StringMatch> Sosware::SosText::TextEditTab::findInText(QString textToFind, bool isCaseSensative, bool onlyWholeWords)
{
    // TODO find and return all matches
    std::vector<Sosware::SosText::StringMatch> stringMatches;

    QTextCursor cursor;
    cursor.setPosition(0);
    textArea->setTextCursor(cursor);

    while(textArea->find(textToFind, {QTextDocument::FindFlag::FindCaseSensitively, QTextDocument::FindFlag::FindWholeWords}))
    {
        Sosware::SosText::StringMatch match;
        match.startPosition = textArea->textCursor().selectionStart();
        match.endPosition = textArea->textCursor().selectionEnd();
        stringMatches.push_back(match);
    }
    return stringMatches;
}

void Sosware::SosText::TextEditTab::goToPositionInText(int startPosition, int endPosition)
{
    QTextCursor cursor;
    cursor.setPosition(startPosition, QTextCursor::MoveAnchor);
    cursor.setPosition(endPosition, QTextCursor::KeepAnchor);
}
