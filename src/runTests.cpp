#include "main.hh"
#include "fileWriter.hh"
#include <vector>

/**
 * Run unit tests
 *
 * Precondition: None
 * Postcondition: Tests are ran
 */
void runTests()
{
    FileWriter* fw;
    string line;
    vector<string> failedTests;
    unsigned int passedTests;

    cout << endl << "Running unit tests..." << endl;
    passedTests = 0;

    //First test the filewriter
    fw = new FileWriter("file.txt");
    fw->writeToFile('a');
    delete fw; //Flush output buffer
    ifstream file("file.txt");
    getline(file, line);

    if(line == "a")
    {
        passedTests++;
    }
    else
    {
        failedTests.push_back("File writing");
    }
    
    remove("file.txt");

    //Since the keylogger reads from stdin, it can't be tested from here

    cout << "Passed tests: " << passedTests << ", Failed tests: " << failedTests.size() << endl;
}
