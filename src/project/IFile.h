#ifndef IFILE_H
#define IFILE_H

#include <filesystem>
#include <vector>

namespace Project
{
    class IFile
    {
        // private variables
        private:
        std::filesystem::path *path; //<! the std::filesystem::path where the project is located.
        bool isDirectory; //<! is this IFile a directory?
        std::vector<IFile> *filesList; //<! if ths IFile is a directory, this is the list of IFiles it contains.

        // public functions
        public:
        IFile(std::filesystem::path path);
        ~IFile();

        // private functions
        private:
        /**
         * @fn checkIfIsDiectory()
         * @brief
         * @return 0 if this is a directory, 1 if is a file
         */
        bool checkIfIsDirectory();

        /**
         * @fn getFilesInDirectory()
         * @brief this function ges all the IFile's contained in this directory, f it is one.
         * @return none
         */
        void getFilesInDirectoy();
    };
};

#endif // IFILE_H