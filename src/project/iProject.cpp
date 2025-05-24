#include "iProject.h"

Project::IProject::IProject()
{
}

Project::IProject::~IProject()
{
}

void Project::IProject::setPath(std::string path)
{
    this->path = new std::filesystem::path(path);
}

std::filesystem::path *Project::IProject::getPath()
{
    return path;
}

void Project::IProject::setProjectType(ProjectType projectType)
{
    this->projectType = projectType;
}

Project::ProjectType Project::IProject::getProjectType()
{
    return(this->projectType);
}
