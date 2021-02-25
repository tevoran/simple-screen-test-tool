#include <SDL2/SDL.h>
#include <stdio.h>


void main()
{
	/*Initialization*/
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window=SDL_CreateWindow("Simple Screen Test Tool", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	SDL_Delay(3000);
}

