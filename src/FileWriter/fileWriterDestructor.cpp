#include "fileWriter.hh"

/**
 * Destructor. Closes the output stream
 *
 * Precondition: None
 * Postcondition: The output stream is closed
 */
FileWriter::~FileWriter()
{
    this->outputFile.close();
}
