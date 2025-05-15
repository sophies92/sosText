#include "project.h"

Project::Project::Project(std::filesystem::path projectPath)
{
    this->projectPath = new std::filesystem::path(projectPath);
}

Project::Project::~Project()
{
    delete this->projectPath;
}
