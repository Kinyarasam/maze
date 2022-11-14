#ifndef _GAME_H_
#define _GAME_H_

#include <stdio.h>
#include <SDL2/SDL.h>

/**
 * struct SDL_Instance - structure that will hold the address of the window.
 * @window: pointer to the window.
 * @renderer: pointer to the renderer
 */
typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

int init_instance(SDL_Instance *);

#endif /* _GAME_H_ */
