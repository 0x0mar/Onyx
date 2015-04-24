#include "keylog.hh"

/**
 * Create a new keylog instance
 *
 * Precondition: file is not null
 * Postcondition: The filewriter is instantiated
 *
 * @param const char* file The output file name
 */
Keylog::Keylog(const char* file)
{
    if(file != NULL)
    {
        this->fileOutput = new FileWriter(file);
        this->writer = true;
    }
    else
    {
        this->writer = false;
    }
}
