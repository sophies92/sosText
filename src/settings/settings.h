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

#ifndef SETTINGS
#define SETTINGS
    #include <QMap>
    #include <QString>
    #include <QSettings>
    #include <QObject>
    #include <QFile>
    #include <QDir>
    #include "setting/setting.h"
    namespace Sosware
    {
        namespace SosText
        {
            class Settings : public QObject
            {
                Q_OBJECT

                private:
                QFile *settingsFile = nullptr;
                QDir settingsFileDir;
                QString settingsFileName;

                QMap<QString, Sosware::SosText::Setting> settingMap;

                public:
                Settings();
                ~Settings();
            };
        }
    }
#endif