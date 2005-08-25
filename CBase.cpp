#include "CBase.h"

CBase::CBase()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		fprintf(stderr, "Could not initialize SDL: %s\n",
				SDL_GetError());
		exit(1);
	}
	atexit(SDL_Quit);
		screen = SDL_SetVideoMode(800, 600, 0, 0);
	if (!screen)
	{
		fprintf(stderr, "Could not set video mode: %s\n",
				SDL_GetError());
		exit(1);
	}
}

int CBase::run()
{
	m_running = 1;
	while (m_running)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_KEYDOWN:
					m_running = 0;
					break;
				case SDL_QUIT:
					m_running = 0;
					break;
			}
		}
	}

	return 0;
}
