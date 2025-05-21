#include "file.h"

Project::File::File(std::filesystem::path path)
{
    this->setPath(path);
}

Project::File::~File()
{
}
