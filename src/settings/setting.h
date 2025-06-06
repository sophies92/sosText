/**
 * @file
 * @brief
 * @author
 */
#ifndef SETTING_H
#define SETTING_H

#include <string>
#include <variant>

namespace sosText
{
    namespace Settings
    {
        class Setting
        {
            private:
            std::string settingName;
            std::string settingDescription;
            std::variant<std::string, int, double, bool> defaultValue;
            std::variant<std::string, int, double, bool> savedValue;
            std::variant<std::string, int, double, bool> tempValue;

            public:
            Setting();
            ~Setting();
            std::string getName();
            void setName(std::string name);
            std::string getDescription();
            void setDescription(std::string description);
            std::variant<std::string, int, double, bool> getDefaultValue();
            void setDefaultValue(std::variant<std::string, int, double, bool> value);
            std::variant<std::string, int, double, bool> getSavedValue();
            void setSavedValue(std::variant<std::string, int, double, bool> value);
            std::variant<std::string, int, double, bool> getTempValue();
            void setTempValue(std::variant<std::string, int, double, bool> value);
        };
    }
}

#endif // SETTING_H