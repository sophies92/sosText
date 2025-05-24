/**
 * 
 */
#ifndef FILE_H
#define FILE_H

#include <string>

#include "iProject.h"

namespace Project
{
    class File : public IProject
    {
        // Public Variables
        public:

        // Private Variables
        private:
        std::string *openFile;

        // Public Functions
        public:
        File();
        ~File();
        std::string *getOpenFile();

        // Private Functions
        private:
    };
}

#endif // FILE_H