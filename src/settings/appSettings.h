/**
 * @file appSettings.h
 * @brief
 * @author Sophie Short
 */
#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <map>

#include "setting.h"

namespace sosText
{
    namespace settings
    {
        class AppSettings
        {
            private:
            std::map<std::string, sosText::settings::Setting> *appSettings;

            public:
            AppSettings();
            ~AppSettings();
        };
    }
}

#endif // APPSETTINGS_H