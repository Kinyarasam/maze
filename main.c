#include "game.h"

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Welcome to the new Maze project\n");

	SDL_Instance instance;

	if (init_instance(&instance) != 0)
		return (1);

	return (0);
}
