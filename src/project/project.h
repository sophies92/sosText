#ifndef PROJECT_H
#define PROJECT_H

#include "IFile.h"

namespace Project
{
    /**
     * @class Project::Project
     * @brief the Project class. This inherits from IFile.
     */
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