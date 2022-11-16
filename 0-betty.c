#include <stdio.h>
#include <stdlib.h>
/**
 * main - passes betty checks
 * @argc:Coujnt of argument
 * @argv:array of vectors of argument
 *
 * Return: Always 0.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	unsigned int i;

	i = 0;
	while (argv[])
	{
		printf("argv[%d] :%s\n", i, argv[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
