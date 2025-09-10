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
#include "ui_textEditTab.h"

Sosware::SosText::TextEditTab::TextEditTab(QWidget *parent) : QWidget(parent), ui(new Ui::TextEditTab)
{
    ui->setupUi(this);
}

Sosware::SosText::TextEditTab::~TextEditTab()
{
    delete ui;
}

int Sosware::SosText::TextEditTab::openFile(QString path)
{
    QFile *qf = new QFile(path);
    qf->open(QIODevice::ReadOnly);
    if(qf->isReadable())
    {
        QString qs = qf->readAll();
        ui->plainTextEdit->appendPlainText(qs);
        return 0;
    }
    else
    {
        return 1;
    }
}

int Sosware::SosText::TextEditTab::saveFile()
{
    return 0;
}

int Sosware::SosText::TextEditTab::saveFileAs(QString path)
{
    return 0;
}