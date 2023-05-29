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

/**
 * _atoi - that convert a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * @s: The pointer to the string.
 * Return: integer which converted from string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);

}
