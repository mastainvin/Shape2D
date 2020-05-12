#ifndef SHAPE2D_H
#define SHAPE2D_H

#include <stdio.h>
#include <stdlib.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

// Forme d'écriture fonction et structures 
// SHP_

// Structures
typedef struct SHP_AnimQueue
{
	SDL_Surface *value;
	struct SHP_AnimQueue *next;
} SHP_AnimQueue, SHP_AnimationQueue;

typedef struct SHP_Rect
{
	double x,y,h,w,a;
	SDL_Color color;
}SHP_Rect;

typedef struct SHP_coord
{
	double x,y;
}SHP_coord;


// Functions prototypes 

void SHP_createRectAnimation(SHP_Rect *rectangle_start,SHP_Rect *rectangle_end,SHP_coord *rotationCenter,SHP_AnimationQueue *animation);
void SHP_presentRectAnimation(SHP_AnimationQueue *animation, SDL_Renderer *renderer, SDL_Window *window);
void SHP_destroyRectAnimation(SHP_AnimationQueue *animation);

#endif