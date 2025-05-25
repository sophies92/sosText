/**
 * 
 */
#ifndef FILE_H
#define FILE_H

#include <string>
namespace Project
{
    class File
    {
        // Public Variables
        public:

        // Private Variables
        private:
        std::string *path;

        // Public Functions
        public:
        File();
        ~File();
        std::string *getPath();
        void setPath(std::string newPath);


        // Private Functions
        private:
        
    };
}

#endif // FILE_H