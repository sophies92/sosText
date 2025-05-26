/**
 * 
 */
#ifndef FILE_H
#define FILE_H

#include <string>
#include <filesystem>
#include <fstream>

namespace Project
{
    class File
    {
        // Public Variables
        public:

        // Private Variables
        private:
        std::filesystem::path *path;
        std::filesystem::path *filename;
        std::string *fileText; 

        // Public Functions
        public:
        File();
        ~File();

        std::filesystem::path *getPath();
        void setPath(std::filesystem::path newPath);

        std::filesystem::path *getfilename();
        void setFilename(std::filesystem::path newFilename);

        std::string *loadFileText();

        // Private Functions
        private:
        
    };
}

#endif // FILE_H