#ifndef _GUI_HH_
#define _GUI_HH_

/**
 * GUI Class
 */
#include "keylog.hh"

typedef struct s_gl_env
{

} t_gl_env;

extern t_gl_env gl_env;

class KeyloggerGui
{
	public:
		static void init();

	private:
		static void setText();
		static void setButtons();
		static void attachHandlers();
};

#endif