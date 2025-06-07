/**
 * @file outputTerminal.h
 * @brief
 * @author Sophie Short
 */
#ifndef OUTPUTTERMINAL_H
#define OUTPUTTERMINAL_H

#include <QObject>
#include <QPlainTextEdit>

namespace sosText
{
    namespace output
    {
        class OutputTerminal : public QObject
        {
            Q_OBJECT



            private:
            QPlainTextEdit *textArea;



            public:

            /**
             * @fn
             * @brief
             * @param
             * @return
             */
            OutputTerminal();

            /**
             * @fn
             * @brief
             * @param
             * @return
             */
            ~OutputTerminal();

            /**
             * @fn
             * @brief
             * @param
             * @return
             */
            void setTextArea(QPlainTextEdit *textArea);



            private:



            public slots:

            /**
             * @fn
             * @brief
             * @param
             * @return
             */
            void printToOutputRequested(std::string text);

            signals:
        };
    }
}

#endif // OUTPUTTERMINAL_H