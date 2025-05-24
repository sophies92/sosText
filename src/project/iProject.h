/**
 * @file project.h
 * @brief 
 * @author Sophie Short
 */

#ifndef IPROJECT_H
#define IPROJECT_H

#include <string>
#include <filesystem>

namespace Project
{
    enum class ProjectType
    {
        FILE,
        PROJECT
    };

    /**
     * @class Project::IProject
     * @brief 
     */
    class IProject
    {
        // Public Variables
        public:

        // Private Variables
        private:
        std::filesystem::path *path;
        Project::ProjectType projectType;

        // Public Functions
        public:
        IProject();
        virtual ~IProject();
        void setPath(std::string path);
        std::filesystem::path *getPath();
        void setProjectType(Project::ProjectType projectType);
        Project::ProjectType getProjectType();

        // Private Functions
        private:
        
    };
}

#endif // IPROJECT_H