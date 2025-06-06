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
    namespace settings
    {
        class Setting
        {
            private:
            std::string settingCatagory;
            std::string settingName;
            std::string settingDescription;
            std::variant<std::string, int, double, bool> defaultValue;
            std::variant<std::string, int, double, bool> savedValue;
            std::variant<std::string, int, double, bool> tempValue;

            public:
            /**
             * @fn
             * @brief
             */
            Setting();
            /**
             * @fn
             * @brief
             */
            ~Setting();
            /**
             * @fn
             * @brief
             */
            std::string getCatagory();
            /**
             * @fn
             * @brief
             */
            void setCatagory(std::string catagory);
            /**
             * @fn
             * @brief
             */
            std::string getName();
            /**
             * @fn
             * @brief
             */
            void setName(std::string name);
            /**
             * @fn
             * @brief
             */
            std::string getDescription();
            /**
             * @fn
             * @brief
             */
            void setDescription(std::string description);
            /**
             * @fn
             * @brief
             */
            std::variant<std::string, int, double, bool> getDefaultValue();
            /**
             * @fn
             * @brief
             */
            void setDefaultValue(std::variant<std::string, int, double, bool> value);
            /**
             * @fn
             * @brief
             */
            std::variant<std::string, int, double, bool> getSavedValue();
            /**
             * @fn
             * @brief
             */
            void setSavedValue(std::variant<std::string, int, double, bool> value);
            /**
             * @fn
             * @brief
             */
            std::variant<std::string, int, double, bool> getTempValue();
            /**
             * @fn
             * @brief
             */
            void setTempValue(std::variant<std::string, int, double, bool> value);
        };
    }
}

#endif // SETTING_H