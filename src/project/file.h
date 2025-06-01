/**
 * 
 */
#ifndef FILE_H
#define FILE_H

#define MAX_FILE_LENGTH 256000

#include <string>
#include <filesystem>
#include <fstream>
#include <iostream>

#include <QString>

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

        std::filesystem::path *getFilename();
        void setFilename(std::filesystem::path newFilename);

        std::string *getFileText();
        void setFileText(std::string *newFileText);

        std::string *loadFile();
        void saveFile(QString tabText);

        // Private Functions
        private:
        
    };
}

#endif // FILE_H