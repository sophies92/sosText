#ifndef PROJECT_H
#define PROJECT_H

#include <filesystem>
#include <vector>

#include "IFile.h"

namespace Project
{
    /**
     * @class Project
     * @brief This is the Project class. It inherits from IFile. It holds the current open project There should only be 1 of these at any time.
     */
    class Project : public IFile
    {
        public:
        Project();
        ~Project();

        private:
    };
};

#endif // PROJECT_H