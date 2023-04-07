#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: counts argument
 * @argv: argument
 * return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int b, c, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	c = atoi(argv[2]);
	diff = b * c;

	printf("%d\n", diff);
	
	return (0);
}
