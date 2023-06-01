#include "main.h"

/**
 * d_and_i_specifier - handles d and i specifier
 * @n: integer
 * Return: length of string
 */
int d_and_i_specifier(int n)
{
	char *ptr;

	ptr = itoa(n, 10);
	write(1, ptr, strlen(ptr));

	return (strlen(ptr));
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
	char smax[]="ffffffffffffffff";
	uintptr_t s = (uintptr_t)(void *)p;

	if (p == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}
	str = itoa(s, 16);
	if (p == (void *)0xffffffffffffffff)
		str = smax;
	_putchar('0');
	_putchar('x');
	write(1, str, strlen(str));
	return (strlen(str) + 2);
}
