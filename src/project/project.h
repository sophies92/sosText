#ifndef PROJECT_H
#define PROJECT_H

#include <filesystem>

namespace Project
{
    class Project
    {
        public:
        
        /**
         * @fn Project(std::flesystem::path projectPath)
         * @brief The consructor for the Project class.
         */
        Project(std::filesystem::path projectPath);
        /**
         * @fn ~Proect()
         * @brief The destrcor for the roject class.
         */
        ~Project();

        private:
        std::filesystem::path *projectPath;
    };
};

#endif // PROJECT_H