#ifndef PROJECT_H
#define PROJECT_H

#include "file.h"

namespace Project
{
    class Project
    {
        public:
        
        Project();
        ~Project();

        private:
        std::vector<File *> projectFiles;
    };
};

#endif // PROJECT_H