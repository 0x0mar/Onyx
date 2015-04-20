#ifndef _GLOBAL_HH_
#define _GLOBAL_HH_

#include <string>
#include <string.h>
#include "keylog.hh"
#include "main.hh"

using namespace std;

typedef struct t_gl_env
{
    bool verboseOutput;
    bool gui;

    Keylog* logger;
} s_gl_env;

#endif
