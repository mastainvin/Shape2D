/*
title : How to use shape2d in exemple
autor : Mastain Vincent
date : 05/18/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "shape2d.h"

int main(int argc, char **argv)
{
	// SDL and TTF init + renderer and window creation
	SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();

	SDL_Renderer *renderer = NULL;
	SDL_Window *window = NULL;
	SDL_CreateWindowAndRenderer(800, 600, 0, &window, &renderer);

	SHP_bool play = true;
	int frame_limit = SDL_GetTicks() + SHP_FRAME_PER_SECOND;

	// Sprite creation with text in UTF8
	SHP_Sprite sprite;
	sprite.background.x = 0;
	sprite.background.y = 0;
	sprite.background.h = 100;
	sprite.background.w = 100;

	sprite.background_color.r = 255;
	sprite.background_color.g = 255;
	sprite.background_color.b = 255;

	sprite.text = "test";

	sprite.text_color.r = 0;
	sprite.text_color.g = 0;
	sprite.text_color.b = 0;

	sprite.text_size = 20;

	// Sprite creation with text
	SHP_Sprite background;
	background.background.x = 0;
	background.background.y = 0;
	background.background.h = 600;
	background.background.w = 800;

	background.background_color.r = 0;
	background.background_color.g = 0;
	background.background_color.b = 0;

	while (play)
	{
		// Déclaration de la variable événement
		SDL_Event event;

		// Récupération des événement avec la SDL
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_QUIT:
			{
				play = false;
			}
			break;

			default:
				break;
			}
		}
		SDL_RenderClear(renderer);

		sprite.background.w++;
		SHP_PrintSprite(background, renderer);
		SHP_PrintSprite(sprite, renderer);
		SDL_RenderPresent(renderer);

		frame_limit = SDL_GetTicks() + SHP_FRAME_PER_SECOND;
		SHP_Limit_FPS(frame_limit);
		frame_limit = SDL_GetTicks() + SHP_FRAME_PER_SECOND;
	}

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	TTF_Quit();
	return 0;
}