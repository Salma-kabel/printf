#include "main.h"

/**
 * percent_specifier - handles d and i specifier
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
 * percent_specifier - handles b specifier
 * @n: integer
 * Return: 1 Always
 */
int b_specifier(int n)
{
	char *binary;

	binary = itoa(n, 2);
	write(1, binary, strlen(binary));
	return (1);
}

/**
 * percent_specifier - handles b specifier
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
