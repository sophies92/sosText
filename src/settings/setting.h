/**
 * @file
 * @brief
 * @author
 */
#ifndef SETTING_H
#define SETTING_H

#include <string>

namespace sosText
{
    namespace Settings
    {
        enum SettingType
        {
            STRING,
            INT,
            DOUBLE,
            BOOL
        };

        class Setting
        {
            private:
            std::string settingName;
            std::string settingDescription;
            SettingType settingType;
            // default value
            // saved value
            // temp value (when editing in settings menu, before save)

            public:
            Setting();
            ~Setting();
        };
    }
}

#endif // SETTING_H