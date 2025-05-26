#include "file.h"

Project::File::File()
{
    this->path = new std::filesystem::path("newFile");
    this->filename = new std::filesystem::path("newFile");
    this->fileText = new std::string();
}

Project::File::~File()
{
    delete this->path;
}

std::filesystem::path *Project::File::getPath()
{
    return(this->path);
}

void Project::File::setPath(std::filesystem::path newPath)
{
    delete this->path;
    this->path = new std::filesystem::path(newPath);
}

std::filesystem::path *Project::File::getfilename()
{
    return(filename);
}

void Project::File::setFilename(std::filesystem::path newFilename)
{
    delete this->filename;
    this->filename = new std::filesystem::path(newFilename);
}

std::string *Project::File::setFileText()
{
    delete fileText;
    fileText = new std::string();
    std::fstream fs;
    fs.open(path->c_str());
    fs.read(fileText->data(), 256000);
    fs.close();
    return(fileText);
}
