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
        class Setting
        {
            std::string settingName;
            std::string settingDescription;

            // default value
            // saved value
            // temp value (when editing in settings menu, before save)
        };
    }
}

#endif // SETTING_H