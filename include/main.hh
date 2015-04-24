#ifndef _MAIN_HH_
#define _MAIN_HH_

#include "global.hh"
#include "keylog.hh"
#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

//TODO: Non-canonical mode
//TODO: Switch for ECHO mode if -v is passed in
//TODO: GUI
//TODO: Hook into Xserver so the program can read keyboard input when the window isn't in focus

using namespace std;

extern s_gl_env gl_env;

void runTests();
void shutdown(int sig);
void usage();

#endif
