#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>

#ifndef __CBASE_H__
#define __CBASE_H__

class CBase
{
private:
	int m_running;
public:
	CBase();
	int run();

	SDL_Surface *screen;
};

#endif
