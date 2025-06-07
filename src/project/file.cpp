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
    delete fileText;
    fileText = new std::string();
    std::fstream fs;
    std::stringstream ss;
    fs.open(path->c_str());
    ss << fs.rdbuf();
    fs.close();
    fileText->append(ss.str());
    return(fileText);
}

void Project::File::saveFile(QString tabText)
{
    if(tabText.toStdString().c_str() != fileText->c_str())
    {
        if(std::filesystem::exists(path->c_str()))
        {
            // TODO needs file backup before overwrite
            std::fstream fs;
            fs.open(path->c_str());
            fs.write(tabText.toStdString().c_str(), tabText.length() +1);
            fs.close();
        }
        else
        {
            // TODO show new file (save as) dialog
        }
    }
}
