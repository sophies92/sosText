/**
 * @file project.h
 * @brief 
 * @author Sophie Short
 */

#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <filesystem>

namespace Project
{
    /**
     * @class Project::Project
     * @brief this class holds all the information about the currently open Project.
     */
    class Project
    {
        // Public Variables
        public:

        // Private Variables
        private:
        std::filesystem::path *path;

        // Public Functions
        public:
        Project();
        ~Project();
        void setPath(std::string path);
        std::filesystem::path *getPath();

        // Private Functions
        private:
        
    };
}

#endif // PROJECT_H