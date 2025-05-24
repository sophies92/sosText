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
    enum ProjectType
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
        ProjectType projectType;

        // Public Functions
        public:
        IProject();
        virtual ~IProject();
        virtual void setPath(std::string path);
        virtual std::filesystem::path *getPath();
        virtual void setProjectType(ProjectType projectType);
        virtual ProjectType getProjectType();
        virtual std::string *getOpenFile() = 0;

        // Private Functions
        private:
        
    };
}

#endif // IPROJECT_H