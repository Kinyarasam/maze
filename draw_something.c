#include "game.h"

/**
 * draw_stuff - Draw something on the window.
 * @instance: image to be drawn.
 *
 * Return: nothing.
 */
void draw_stuff(SDL_Instance instance)
{
	SDL_SetRenderDrawColor(instance.renderer, 255, 255, 255, 255);
	SDL_RenderDrawLine(instance.renderer, 10, 10, 100, 100);
}
