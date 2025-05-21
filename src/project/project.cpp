#include "project.h"

Project::Project::Project(std::filesystem::path path)
{
    this->setPath(path);
}

Project::Project::~Project()
{
}