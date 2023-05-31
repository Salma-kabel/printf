#include "main.h"

/**
 * s_specifier - handles s specifier and prints
 * @s: string
 * Return: length of string
 */

int s_specifier(char *s)
{
	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
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
 * S_specifier - handles S specifier
 * @s: string to print
 * Return: 0 if length of string is 0, length of string otherwise
 */

int S_specifier(char *s)
{
	int i, n, length = 0;
	char *shex;

	if (s == NULL || strlen(s) == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= 32 && s[i] <= 126)
			{
				write(1, (s + i), 1);
				length++;
			}
			else
			{
				_putchar('\\');
				_putchar('x');
				length += 2;
				n = s[i];
				shex = itoa(n, 16);
				to_upper(shex);
				if (strlen(shex) == 1)
					_putchar('0');
				write(1, shex, strlen(shex));
				length += strlen(shex);
			}
		}
	}
	return (length);
}
