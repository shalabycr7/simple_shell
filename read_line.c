#include "main.h"

/**
 * read_line - get the input.
 * @i_eof: return getline value.
 * Return: input string.
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
