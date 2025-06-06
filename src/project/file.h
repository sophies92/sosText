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
        /**
         * @fn
         * @brief
         */
        File();
        /**
         * @fn
         * @brief
         */
        ~File();
        /**
         * @fn
         * @brief
         */
        std::filesystem::path *getPath();
        /**
         * @fn
         * @brief
         */
        void setPath(std::filesystem::path newPath);
        /**
         * @fn
         * @brief
         */
        std::filesystem::path *getFilename();
        /**
         * @fn
         * @brief
         */
        void setFilename(std::filesystem::path newFilename);
        /**
         * @fn
         * @brief
         */
        std::string *getFileText();
        /**
         * @fn
         * @brief
         */
        void setFileText(std::string *newFileText);
        /**
         * @fn
         * @brief
         */
        std::string *loadFile();
        /**
         * @fn
         * @brief
         */
        void saveFile(QString tabText);

        // Private Functions
        private:
        
    };
}

#endif // FILE_H