#include "fileWriter.hh"

/**
 * Instantiate a new FileWriter class
 *
 * Precondition: fileName is not null
 * Postcondition: The file writer is setup
 *
 * @param const char* fileName The name of the file to open for writing
 */
FileWriter::FileWriter(const char* fileName)
{
    this->outputFile.open(fileName);

    if(!this->outputFile.is_open())
    {
        cerr << "Error opening file!" << endl;
        exit(1);
    }
}
