#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count the number of arguments
 * @argv: arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv; /*argc*/
	printf("%d\n", argc - 1);
	return (0);
}
