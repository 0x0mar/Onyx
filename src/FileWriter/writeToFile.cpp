#include "fileWriter.hh"

/**
 * Write a byte of data to the file
 *
 * Precondition: data is not nul
 * Postcondition: The byte is written to the file
 *
 * @param char data The data to write to the file
 */
void FileWriter::writeToFile(char data)
{
    this->outputFile << data;
}
