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

        /**
         * @fn checkExists()
         * @brief check if the file exists
         */
        bool checkExists();

        /**
         * @fn checkFileType()
         * @brief checks if the file is an openable file type
         */
        int checkFileType();

        /**
         * @fn loadFile()
         * @brief loads the file and returns it as a string
         */
        std::string *loadFile();
    };
}

#endif // FILE_H