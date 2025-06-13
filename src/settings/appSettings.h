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
             * @fn AppSettings()
             * @brief
             * @param none
             * @return none
             */
            AppSettings();
            /**
             * @fn ~AppSettings()
             * @brief
             * @param none
             * @return none
             */
            ~AppSettings();

            /**
             * @fn LoadSettings()
             * @brief
             * @param none
             * @return none
             */
            void LoadSettings();

            /**
             * @fn *getAllSettings()
             * @brief
             * @param none
             * @return a pointer to the appSettingsMap object
             */
            std::map<std::string, sosText::settings::Setting> *getAllSettings();



            private:

            /**
             * @fn addSetting(std::string catagory, std::string name, std::string description, 
                std::variant<std::string, int, double, bool> defaultValue, std::variant<std::string, int, double, bool> savedValue)
             * @brief
             * @param catagory
             * @param name
             * @param description
             * @param defaultValue
             * @param savedValue
             * @return none
             */
            void addSetting(std::string catagory, std::string name, std::string description, 
                std::variant<std::string, int, double, bool> defaultValue, std::variant<std::string, int, double, bool> savedValue);
        };
    }
}

#endif // APPSETTINGS_H