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

#include "settings.h"

Sosware::SosText::Settings::Settings()
{
    settingsFileDir = QDir::homePath() + "/.config/sosware/sosText/";
    settingsFileName = "/settings.config";
    loadSettingsFile();
}

Sosware::SosText::Settings::~Settings()
{
    if(settingsFile != nullptr)
    {
        delete settingsFile;
    }
}

QFile *Sosware::SosText::Settings::createNewSettingsFile()
{
    QFile *settingsFile = new QFile(settingsFileDir.path() + settingsFileName);

    if(!settingsFileDir.exists())
    {
        settingsFileDir.mkpath(settingsFileDir.path());
    }

    if(!settingsFile->isOpen())
    {
        settingsFile->open(QIODevice::WriteOnly);
    }

    settingsFile->write(QString().toStdString().c_str());
    settingsFile->close();
    return settingsFile;
}

void Sosware::SosText::Settings::loadSettingsFile()
{
    if(!QFile(settingsFileName).exists())
    {
        if(settingsFile != nullptr)
        {
            delete settingsFile;
        }
        settingsFile = createNewSettingsFile();
    }

    if(!settingsFile->isOpen())
    {
        settingsFile->open(QIODevice::ReadOnly);
    }

    while(settingsFile->canReadLine())
    {
        QString line = settingsFile->readLine();
        QStringList splitLine = line.split("=", Qt::SplitBehaviorFlags::KeepEmptyParts);
        Sosware::SosText::Setting setting;
        setting.nameString = splitLine[0];
        setting.valueString = splitLine[1];
        if(settingMap.contains(setting.nameString))
        {
            settingMap[setting.nameString] = setting;
        }
        else
        {
            settingMap.insert(setting.nameString, setting);
        }
    }
    settingsFile->close();
}

