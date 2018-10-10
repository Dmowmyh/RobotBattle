#include <iostream>
#include "SDL2/SDL.h"

int main(int argc, char* args[])
{
	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) != 0)
	{
		//TODO add log information
		return -1;
	}

	SDL_Quit();
	return 0;
}
