#include "file.h"

Project::File::File()
{
    this->path = new std::string("newFile");
}

Project::File::~File()
{
    delete this->path;
}

std::string *Project::File::getPath()
{
    return(this->path);
}

void Project::File::setPath(std::string newPath)
{
    delete this->path;
    this->path = new std::string(newPath);
}
