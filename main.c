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
		 * events
		 */
		if (poll_events() == 1)
			break;
		draw_stuff(instance);
		SDL_RenderPresent(instance.renderer);
	}
	SDL_DestroyRenderer(instance.renderer);
	SDL_DestroyWindow(instance.window);
	SDL_Quit();
	return (0);
	return (0);
}
