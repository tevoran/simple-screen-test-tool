#include <SDL2/SDL.h>


void main()
{
	/*Initialization*/
	SDL_Init(SDL_INIT_EVERYTHING);

	/*variables*/
	SDL_Window *window=SDL_CreateWindow("Simple Screen Test Tool", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	SDL_Renderer *renderer=SDL_CreateRenderer(window, -1, 0);

	/*set a variable for the current visible colour, so we can move between them with mouse and keyboard input
	0 = white
	1 = black
	2 = red
	3 = green
	4 = blue*/
	unsigned int color=0;
	unsigned int quit=0;
	
	while(quit==0)
	{
		switch(color)
		{
			/*white*/
			case 0:
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			break;

			/*black*/
			case 1:
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
			break;

			/*red*/
			case 2:
				SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
			break;

			/*green*/
			case 3:
				SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
			break;

			/*blue*/
			case 4:
				SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
			break;
		}

		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_Delay(1000);
		color++;
		if(color==5)
		{
			quit=1;
		}
	}
}

