#include "main.hh"

/**
 * Signal handler for SIGINT
 *
 * Precondition: None
 * Postcondition: The objects are deleted and the program quits
 *
 * @param int sig The signal number
 */
void shutdown(int sig)
{
    cout << endl << endl << "Shutting down..." << endl;
    delete gl_env.logger;

    exit(0);
}
