#include "setting.h"

sosText::settings::Setting::Setting()
{

}

sosText::settings::Setting::~Setting()
{

}

std::string sosText::settings::Setting::getCatagory()
{
    return(this->settingCatagory);
}

void sosText::settings::Setting::setCatagory(std::string catagory)
{
    this->settingCatagory = catagory;
}

std::string sosText::settings::Setting::getName()
{
    return(this->settingName);
}

void sosText::settings::Setting::setName(std::string name)
{
    this->settingName = name;
}

std::string sosText::settings::Setting::getDescription()
{
    return(this->settingDescription);
}

void sosText::settings::Setting::setDescription(std::string description)
{
    this->settingDescription = description;
}

std::variant<std::string, int, double, bool> sosText::settings::Setting::getDefaultValue()
{
    return(this->defaultValue);
}

void sosText::settings::Setting::setDefaultValue(std::variant<std::string, int, double, bool> value)
{
    this->defaultValue = value;
}

std::variant<std::string, int, double, bool> sosText::settings::Setting::getSavedValue()
{
    return(this->savedValue);
}

void sosText::settings::Setting::setSavedValue(std::variant<std::string, int, double, bool> value)
{
    this->savedValue = value;
}

std::variant<std::string, int, double, bool> sosText::settings::Setting::getTempValue()
{
    return(this->tempValue);
}

void sosText::settings::Setting::setTempValue(std::variant<std::string, int, double, bool> value)
{
    this->tempValue = value;
}
