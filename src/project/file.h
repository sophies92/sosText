#ifndef FILE_H
#define FILE_H

#include <QString>

namespace Project
{
    class File
    {
        File();
        ~File();

        QString fileText;
        char filepath[150];
    };
};

#endif // FILE_H