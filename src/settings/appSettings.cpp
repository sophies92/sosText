#include "appSettings.h"

sosText::settings::AppSettings::AppSettings()
{
    appSettings = new std::map<std::string, sosText::settings::Setting>();
}

sosText::settings::AppSettings::~AppSettings()
{
    delete appSettings;
}
