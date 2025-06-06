#include "setting.h"

sosText::Settings::Setting::Setting()
{

}

sosText::Settings::Setting::~Setting()
{

}

std::string sosText::Settings::Setting::getName()
{
    return(this->settingName);
}

void sosText::Settings::Setting::setName(std::string name)
{
    this->settingName = name;
}

std::string sosText::Settings::Setting::getDescription()
{
    return(this->settingDescription);
}

void sosText::Settings::Setting::setDescription(std::string description)
{
    this->settingDescription = description;
}

std::variant<std::string, int, double, bool> sosText::Settings::Setting::getDefaultValue()
{
    return(this->defaultValue);
}

void sosText::Settings::Setting::setDefaultValue(std::variant<std::string, int, double, bool> value)
{
    this->defaultValue = value;
}

std::variant<std::string, int, double, bool> sosText::Settings::Setting::getSavedValue()
{
    return(this->savedValue);
}

void sosText::Settings::Setting::setSavedValue(std::variant<std::string, int, double, bool> value)
{
    this->savedValue = value;
}

std::variant<std::string, int, double, bool> sosText::Settings::Setting::getTempValue()
{
    return(this->tempValue);
}

void sosText::Settings::Setting::setTempValue(std::variant<std::string, int, double, bool> value)
{
    this->tempValue = value;
}
