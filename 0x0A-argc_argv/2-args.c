#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: counts the nuber of arguments
 * @argv: argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	while (i = 0, i < argc)
	printf("%s\n", argv[i]);
		i++;
		return (0);
}
