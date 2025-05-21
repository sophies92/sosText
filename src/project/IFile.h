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
        std::filesystem::path *path; //<! the std::filesystem::path where the project is located.
        bool isDirectory; //<! is this IFile a directory?
        std::vector<IFile> *filesList; //<! if ths IFile is a directory, this is the list of IFiles it contains.

        // public functions
        public:
        /**
         * @fn IFile(std::filesystm::path)
         */
        IFile(std::filesystem::path path);

        /**
         * @fn ~IFile()
         */
        virtual ~IFile();

        virtual void setPath(std::string path);

        // private functions
        private:
        /**
         * @fn checkIfIsDiectory()
         * @brief
         * @return 0 if this is a directory, 1 if is a file
         */
        virtual bool checkIfIsDirectory();

        /**
         * @fn getFilesInDirectory()
         * @brief this function ges all the IFile's contained in this directory, if it is one.
         * @return none
         */
        virtual void getFilesInDirectoy();
    };
};

#endif // IFILE_H