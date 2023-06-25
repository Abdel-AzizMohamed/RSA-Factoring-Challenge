#include "main.h"


/**
 * main - read line by line from a file
 * @argc: number of args
 * @argv: given args
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	FILE *op;
	size_t length;
	char *buffer;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor\n");
		exit(EXIT_FAILURE);
	}

	op = fopen(argv[1], "r");
	if (!op)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &length, op) != -1)
	{
		factorize(buffer);
	}

	return (0);
}
