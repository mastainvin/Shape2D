#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL2_rotozoom.h>
#include "shape2d.h"

void SHP_PrintSprite(SHP_Sprite sprite, SDL_Renderer *renderer)
{
	SDL_SetRenderDrawColor(renderer, sprite.background_color.r, sprite.background_color.g, sprite.background_color.b, 255);
	SDL_RenderFillRect(renderer,&sprite.background);

	SDL_Surface *text_surface = NULL;
	SDL_Texture *text_texture = NULL;

	TTF_Font *font = TTF_OpenFont("arial.ttf", sprite.text_size);

	if (font == NULL)
	{
	}

	text_surface = TTF_RenderText_Blended(font, sprite.text, sprite.text_color);
	if (text_surface == NULL)
	{
	}

	text_texture = SDL_CreateTextureFromSurface(renderer, text_surface);
	SDL_FreeSurface(text_surface);

	if (text_texture == NULL)
	{
	}

	SDL_Rect text_position;
	
	if (SDL_QueryTexture(text_texture, NULL, NULL, &text_position.w, &text_position.h) != 0)
	{
	}
	text_position.x = sprite.background.x + (sprite.background.w - text_position.w) / 2;
	text_position.y = sprite.background.y + (sprite.background.h - text_position.h) / 2;

	SDL_RenderCopy(renderer, text_texture, NULL, &text_position);
	TTF_CloseFont(font);
	SDL_DestroyTexture(text_texture);
}

void SHP_Limit_FPS(unsigned int limit)
{
	//On récupère tick actuel
	unsigned int tick = SDL_GetTicks();
	unsigned int periode = 1000 / SHP_FRAME_PER_SECOND;

	// Si notre ancienne mesure est plus petite : on est en retard -> aucune limitation

	if (limit > tick + periode) // Si on est en avance d'une pariode
	{
		SDL_Delay(periode);
	}
	else // Sinon
	{
		SDL_Delay(limit - tick);
	}
}