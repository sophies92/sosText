#include "appSettings.h"

sosText::settings::AppSettings::AppSettings()
{
    appSettings = new std::map<std::string, sosText::settings::Setting>();
}

sosText::settings::AppSettings::~AppSettings()
{
    delete appSettings;
}

void sosText::settings::AppSettings::LoadSettings()
{
    // TODO load settings from file and add to settings map
}
