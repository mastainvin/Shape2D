#ifndef SHAPE2D_H
#define SHAPE2D_H

#include <stdio.h>
#include <stdlib.h>

#include <SDL2/SDL.h>

#define SHP_FRAME_PER_SECOND 60

// Forme d'écriture fonction et structures
// SHP_
typedef enum bool
{
	false,
	true
}bool;
// Structures
typedef struct SHP_Sprite
{
	SDL_Rect background;
	SDL_Color background_color;
	char *text;
	SDL_Color text_color;
	int text_size;
}SHP_Sprite;

// Functions

void SHP_PrintSprite(SHP_Sprite sprite,SDL_Renderer *renderer);
SHP_Sprite *SHP_CreateSpriteFromRect(SDL_Rect rect, double angle, SDL_Color color, char *text);
void SHP_DestroySprite(SHP_Sprite *sprite);

void SHP_Limit_FPS(unsigned int limit);

#endif