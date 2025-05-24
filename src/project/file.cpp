#include "file.h"

Project::File::File()
{
    openFile = new std::string("Replace this soon");
}

Project::File::~File()
{
    delete openFile;
}

std::string *Project::File::getOpenFile()
{
    return(this->openFile);
}
