#include "main.h"

/**
 * main - main function
 * @argc: inter size
 * @argv: array
 *
 * Return: 0 on saccess
 */
int main(int argc, char *argv[])
{
	FILE *factor;
	size_t c;
	ssize_t line;
	char *buff = NULL;
	u_int32_t n;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	factor = fopen(argv[1], "r");
	if (factor == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buff, &c, factor)) != -1)
	{
		n = atoi(buff);
		helper(n);
	}
	return (0);
}
