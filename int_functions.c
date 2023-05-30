#include "main.h"

/**
 * d_and_i_specifier - handles d and i specifier
 * @n: integer
 * Return: length of string 
 */
int d_and_i_specifier(int n)
{
	char str1[100];
	int length = 0;

	if (n < 0)
	{
		_putchar('-');
		tostring(str1, -n);
		write(1, str1, strlen(str1));
		length = 1;
	}
	else
	{
		tostring(str1, n);
		write(1, str1, strlen(str1));
	}
	length += strlen(str1);
	return (length);
}

/**
 * u_specifier - handles u specifier
 * @n: integer
 * Return: length of pointer
 */
int u_specifier(unsigned int n)
{
	char *ptr;
	ptr = itoa(n, 10);
	write(1, ptr, strlen(ptr));

	return (strlen(ptr));
}

/**
 * p_specifier - handles p specifier
 * @p: pointer to void
 * Return: length of pointer
 */
int p_specifier(void *p)
{
	char *str;
	uintptr_t s = (uintptr_t)(void *)p;

	str = itoa(s, 16);
	_putchar('0');
	_putchar('x');
	write(1, str, strlen(str));
	return (strlen(str) + 2);
}
