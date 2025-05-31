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
    delete this->filename;
    delete this ->fileText;
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
    // BUG text not clearing????
    delete fileText;
    fileText = new std::string();
    char text[MAX_FILE_LENGTH];
    std::fstream fs;
    fflush(stdin);
    fs.open(path->c_str());
    fs.read(text, MAX_FILE_LENGTH);
    fileText->assign(text);
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
