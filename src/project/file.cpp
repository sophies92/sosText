#include "file.h"

Project::File::File()
{
    
}

Project::File::~File()
{
    delete openFile;
}

std::string *Project::File::getOpenFile()
{
    return(this->openFile);
}

void Project::File::setOpenFile(std::string *string)
{
    openFile = string;
}
