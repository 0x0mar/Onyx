#ifndef _FILE_WRITER_HH_
#define _FILE_WRITER_HH_

#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

class FileWriter
{
    public:
        FileWriter(char* fileName);
        ~FileWriter();
        void writeToFile(char data);

    private:
        ofstream outputFile;
};

#endif
