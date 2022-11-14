#ifndef _GAME_H_
#define _GAME_H_

#include <stdio.h>
#include <stdbool.h>
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

bool ACTIVE_RUNNING;
int init_instance(SDL_Instance *);
void draw_stuff(SDL_Instance instance);
int poll_events();

#endif /* _GAME_H_ */
