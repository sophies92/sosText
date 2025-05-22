#include "project.h"

Project::Project::Project()
{
}

Project::Project::~Project()
{
}

void Project::Project::setPath(std::string path)
{
    this->path = new std::filesystem::path(path);
}

std::filesystem::path *Project::Project::getPath()
{
    return path;
}
