#ifndef FILE_H
#define FILE_H

#include <string>
#include "IFile.h"

namespace Project
{
    class File : public IFile
    {
        public:
        File(std::filesystem::path path);
        ~File();
    };
}

#endif // FILE_H