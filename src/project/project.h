#ifndef PROJECT_H
#define PROJECT_H

#include <filesystem>
#include <vector>

#include "IFile.h"

namespace Project
{
    /**
     * @class This is the Project class. It i nherits from IFile. It holds the current opn project There should only be 1 of these a at any time.
     */
    class Project : IFile
    {
        public:
        Project();
        ~Project();

        private:
    };
};

#endif // PROJECT_H