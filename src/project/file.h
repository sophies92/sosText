#ifndef FILE_H
#define FILE_H

#include "IFile.h"

namespace Project
{
    class File : IFile
    {
        public:
        File();
        ~File();

        void loadFile();
    };
}

#endif // FILE_H