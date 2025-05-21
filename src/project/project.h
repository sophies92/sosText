#ifndef PROJECT_H
#define PROJECT_H

#include "IFile.h"

namespace Project
{
    static IFile *currentProject;
    
    class Project : public IFile
    {
        // Public Variables

        // Private Variables

        // Public Functions
        Project(std::filesystem::path path);
        ~Project();

        // Private Functions
    };
}

#endif // PROJECT_H