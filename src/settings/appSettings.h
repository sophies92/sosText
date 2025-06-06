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
            std::map<std::string, sosText::settings::Setting> *appSettingsMap;

            public:
            /**
             * @fn
             * @brief
             */
            AppSettings();
            /**
             * @fn
             * @brief
             */
            ~AppSettings();
            /**
             * @fn
             * @brief
             */
            void LoadSettings();
        };
    }
}

#endif // APPSETTINGS_H