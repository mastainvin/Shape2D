#include <stdio.h>
#include <stdlib.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "shape2d.h"


/* ------------------------------------------------------- */ 
void SHP_createRectAnimation(SHP_Rect *rectangle_start, SHP_Rect *rectangle_end, SHP_coord *rotationCenter, SHP_AnimationQueue *animation)
{
	/* Create an animation from the first rectangle of the animation
	and the last rectangle of the animation. */
}

/* ------------------------------------------------------- */
void SHP_presentRectAnimation(SHP_AnimationQueue *animation, SDL_Renderer *renderer, SDL_Window *window)
{
	/* Add in the renderer the last image of the animation queue */ 
}

void SHP_destroyRectAnimation(SHP_AnimationQueue *animation)
{
	/* Destroy all the surfaces of the animation queue
}
