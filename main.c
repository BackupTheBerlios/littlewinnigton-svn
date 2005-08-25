#include <stdio.h>
#include <stdio.h>

#include <SDL.h>

#ifdef _WIN32
#undef main
#endif

int main (int argc, char *argv[])
{
	SDL_Surface *screen;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		fprintf(stderr, "Could not initialize SDL: %s\n", \
				SDL_GetError());
		exit(1);
	}
	atexit(SDL_Quit);

	screen = SDL_SetVideoMode(800, 600, 0, 0);
	if (!screen)
	{
		fprintf(stderr, "Could not set video mode: %s\n", \
				SDL_GetError());
		exit(1);
	}

	running = 1;
	while(running)
	{
		SDL_Event event;

		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_KEYDOWN:
					running = 0;
					break;
				case SDL_QUIT;
					running = 0;
					break;
			}
		}
	}
	
	return 0;
}
