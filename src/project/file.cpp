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

std::filesystem::path *Project::File::getFilename()
{
    return(filename);
}

void Project::File::setFilename(std::filesystem::path newFilename)
{
    delete this->filename;
    this->filename = new std::filesystem::path(newFilename);
}

std::string *Project::File::getFileText()
{
    return(this->fileText);
}

void Project::File::setFileText(std::string *newFileText)
{
    this->fileText = newFileText;
}

std::string *Project::File::loadFile()
{
    delete fileText;
    fileText = new std::string();
    std::fstream fs;
    fs.open(path->c_str());
    fs.read(fileText->data(), MAX_FILE_LENGTH);
    fs.close();
    return(fileText);
}

void Project::File::saveFile(QString *tabText)
{
    if(tabText->toStdString().c_str() != fileText->c_str())
    {
        std::fstream fs;
        fs.open(path->c_str());
        fs.write(tabText->toStdString().c_str(), MAX_FILE_LENGTH);
        fs.close();
    }
}
