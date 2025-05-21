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

        /**
         * @fn loadFile()
         * @brief loads the file and returns it as a string
         */
        std::string *loadFile();
    };
}

#endif // FILE_H