#ifndef IFILE_H
#define IFILE_H

#include <filesystem>
#include <vector>

namespace Project
{
    class IFile
    {
        // Public Variables

        // private variables
        private:
        std::filesystem::path *path;    //<! the std::filesystem::path where the project is located.

        // public functions
        public:

        /**
         * @fn ~IFile()
         * @brief destructor for IFile.
         */
        virtual ~IFile();

        virtual void setPath(std::string path);

        // private functions
        private:
        
    };
};

#endif // IFILE_H