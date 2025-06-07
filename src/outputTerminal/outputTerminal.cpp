#include "outputTerminal.h"

sosText::output::OutputTerminal::OutputTerminal()
{
}

sosText::output::OutputTerminal::~OutputTerminal()
{
}

void sosText::output::OutputTerminal::setTextArea(QPlainTextEdit *textArea)
{
    this->textArea = textArea;
}

void sosText::output::OutputTerminal::printToOutputRequested(std::string text)
{
    textArea->appendPlainText(text.c_str());
}