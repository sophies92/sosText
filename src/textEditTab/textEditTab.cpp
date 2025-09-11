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
    QHBoxLayout layout(this);
    
    lineNumberArea.setReadOnly(true);
    lineNumberArea.setMaximumWidth(50);
    lineNumberArea.setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

    layout.addWidget(&lineNumberArea);
    layout.addWidget(&textArea);
}

Sosware::SosText::TextEditTab::~TextEditTab()
{
}

void Sosware::SosText::TextEditTab::setFilepath(QString path)
{
    filepath = path;
}

int Sosware::SosText::TextEditTab::openFile(QString path)
{
    QFile qf(path);
    if(qf.open(QIODevice::ReadOnly))
    {
        QString qs = qf.readAll();
        textArea.appendPlainText(qs);
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
        if(qf.open(QIODevice::ReadWrite))
        {
            QString qs = textArea.toPlainText();
            qf.write(qs.toStdString().c_str());
            return 0;
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
        saveFile();
        return 0;
    }
}