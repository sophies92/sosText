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
        bool isDirectory;
        std::filesystem::path *path; //<! the std::filesystem::path where the project is located.
        std::vector<IFile> *filesList;

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
        void getFilesInDirectoy();
    };
};

#endif // IFILE_H