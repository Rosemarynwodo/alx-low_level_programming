#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: counts the nuber of arguments
 * @argv: argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
	return (0);
}
