#include "IFile.h"

Project::IFile::IFile(std::filesystem::path path)
{
    this->path = new std::filesystem::path(path);
    if(checkIfIsDirectory())
    {
        this->isDirectory = true;
        getFilesInDirectoy();
    }
    else
    {
        this->isDirectory = false;
    }
}

Project::IFile::~IFile()
{
    delete this->path;
}

bool Project::IFile::checkIfIsDirectory()
{
    if(std::filesystem::is_directory(*this->path))
    {
        return(true);
    }
    else
    {
        return(false);
    }
}

void Project::IFile::getFilesInDirectoy()
{
    for(auto& file : std::filesystem::directory_iterator(*this->path))
    {
        // create "file" and add to filesList
    }
}

void Project::IFile::setPath(std::string path)
{
    this->path = new std::filesystem::path(path);
}
