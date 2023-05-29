#include "main.h"

/**
 * int_to_string - converts an int to string
 * @x: integer
 * Return: pointer to string
 */

char *int_to_string(int x)
{
	int i, length = 0;
	char *s;

	for (i = 0; x / 10 != 0; i++)
	{
		length++;
	}
	length++;
	s = malloc(sizeof(char) * (length + 1));
	for (i = 0; i < length; i++)
	{
		s[i] = (x % 10) + 48;
		x = x / 10;
	}
	s[i] = '\0';
	return (s);
}
