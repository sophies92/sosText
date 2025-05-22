#include "IFile.h"


Project::IFile::~IFile()
{
    delete this->path;
    delete this;
}

void Project::IFile::setPath(std::string path)
{
    this->path = new std::filesystem::path(path);
}
