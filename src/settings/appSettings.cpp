#include "appSettings.h"

sosText::settings::AppSettings::AppSettings()
{
    appSettingsMap = new std::map<std::string, sosText::settings::Setting>();
}

sosText::settings::AppSettings::~AppSettings()
{
    delete appSettingsMap;
}

void sosText::settings::AppSettings::LoadSettings()
{
    // TODO load settings from file and add to settings map
}

std::map<std::string, sosText::settings::Setting> *sosText::settings::AppSettings::getAllSettings()
{
    return(this->appSettingsMap);
}

void sosText::settings::AppSettings::addSetting(std::string catagory, std::string name, std::string description, 
    std::variant<std::string, int, double, bool> defaultValue, std::variant<std::string, int, double, bool> savedValue)
{
    sosText::settings::Setting *newSetting = new sosText::settings::Setting();
    newSetting->setCatagory(catagory);
    newSetting->setName(name);
    newSetting->setDescription(description);
    newSetting->setDefaultValue(defaultValue);
    newSetting->setSavedValue(savedValue);
    
    appSettingsMap->emplace(newSetting);
}
