/**
 * @file outputTerminal.h
 * @brief
 * @author Sophie Short
 */
#ifndef OUTPUTTERMINAL_H
#define OUTPUTTERMINAL_H

#include <QObject>

namespace sosText
{
    namespace output
    {
        class OutputTerminal : public QObject
        {
            Q_OBJECT

            public:
            OutputTerminal();
            ~OutputTerminal();

            private:

            public slots:
            /**
             * @fn
             * @brief
             * @param
             * @return
             */
            void printToOutputRequested(char* text);

            signals:
        };
    }
}

#endif // OUTPUTTERMINAL_H