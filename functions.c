#include "main.h"

/**
 * s_specifier - handles s specifier and prints
 * @s: string
 * Return: length of string
 */

int s_specifier(char *s)
{
	if (s == NULL || strlen(s) == 0)
	{
		return (0);
	}
	else
	{
		write(1, s, strlen(s));
		return (strlen(s));
	}
}

/**
 * c_specifier - hadles c specifier
 * @c: character
 * Return: 1 Always
 */

int c_specifier(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * percent_specifier - handles % specifier
 * @c: character
 * Return: 1 Always
 */

int percent_specifier(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * percent_specifier - handles d and i specifier
 * @c: character
 * Return: 1 Always
 */
int d_and_i_specifier(int n)
{
	char str1[100];
	tostring(str1, n);
	write(1, str1, strlen(str1));

	return (1);
}
