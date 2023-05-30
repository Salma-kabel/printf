#include "main.h"

/**
 * d_and_i_specifier - handles d and i specifier
 * @n: integer
 * Return: 1 Always
 */
int d_and_i_specifier(int n)
{
	char str1[100];

	if (n < 0)
	{
		_putchar('-');
		tostring(str1, -n);
		write(1, str1, strlen(str1));

	}
	else
	{
		tostring(str1, n);
		write(1, str1, strlen(str1));
	}
	return (1);
}

/**
 * u_specifier - handles u specifier
 * @n: integer
 * Return: 1 Always
 */
int u_specifier(unsigned int n)
{
	char *ptr;

	ptr = itoa(n, 10);
	write(1, ptr, strlen(ptr));

	return (1);
}
