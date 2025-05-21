#ifndef FILE_H
#define FILE_H

#include <string>
#include "IFile.h"

namespace Project
{
    class File : IFile
    {
        public:
        File();
        ~File();

        std::string *loadFile();
    };
}

#endif // FILE_H