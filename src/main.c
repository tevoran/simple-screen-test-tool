#include <SDL2/SDL.h>

#include <stdio.h>

void main()
{
	/*Initialization*/
	SDL_Init(SDL_INIT_EVERYTHING);

	/*variables*/
	SDL_Window *window=SDL_CreateWindow("Simple Screen Test Tool", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	SDL_Renderer *renderer=SDL_CreateRenderer(window, -1, 0);
	SDL_Event event;

	/*set a variable for the current visible colour, so we can move between them with mouse and keyboard input
	0 = white
	1 = black
	2 = red
	3 = green
	4 = blue*/
	unsigned int color=4;
	unsigned int quit=0;
	
	while(quit==0)
	{

		/*handling input*/
		SDL_PollEvent(&event);
		switch(event.type)
		{
			/*closing window*/
			case SDL_QUIT:
				exit(0);

			/*keyboard input*/
			case SDL_KEYDOWN:
				switch(event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
						exit(0);

					/*choosing color towards the beginning*/
					case SDLK_BACKSPACE:
						if(color<1)
						{
							color=0;
						}
						else
						{
							color--;
						}
						break;

					case SDLK_LEFT:
						if(color<1)
						{
							color=0;
						}
						else
						{
							color--;
						}
						break;

					/*selecting next color*/
					case SDLK_SPACE:
						color++;
						if(color==5)
						{
							color=4;
						}
						break;

					case SDLK_RIGHT:
						color++;
						if(color==5)
						{
							color=4;
						}
						break;
				}
				break;
		}

		/*current color*/
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

			default:
				quit=1;
				break;
		}

		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_Delay(100);
		if(color==6)
		{
			color=5;
		}
		if(color==5)
		{
			quit=0;
		}
	}
}

