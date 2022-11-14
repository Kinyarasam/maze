#include "game.h"

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Welcome to the new Maze project\n");
	ACTIVE_RUNNING = true;

	SDL_Instance instance;

	if (init_instance(&instance) != 0)
		return (1);


	while (ACTIVE_RUNNING == true)
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		/**
		 * TODO: Draw Something
		 */
		SDL_RenderPresent(instance.renderer);
	}
	return (0);
}
