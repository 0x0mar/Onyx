#include "keylog.hh"

/**
 * Destroy the object
 *
 * Precondition: None
 * Postcondition: The object is destroyed
 */
Keylog::~Keylog()
{
    delete this->fileOutput;
}
