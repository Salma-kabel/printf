#include "main.h"


/**
 * b_specifier - handles b specifier
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
 * o_specifier - handles o specifier
 * @n: integer
 * Return: 1 Always
 */
int o_specifier(unsigned int n)
{
	char *oct;

	oct = itoa(n, 8);
	write(1, oct, strlen(oct));

	return (1);
}

/**
 * x_specifier - handles x specifier
 * @n: integer
 * Return: 1 Always
 */
int x_specifier(unsigned int n)
{
	char *hex;

	hex = itoa(n, 16);
	write(1, hex, strlen(hex));

	return (1);
}

/**
 * X_specifier - handles X specifier
 * @n: integer
 * Return: 1 Always
 */
int X_specifier(unsigned int n)
{
	char *upper_hex;

	upper_hex = itoa(n, 16);
	to_upper(upper_hex);
	write(1, upper_hex, strlen(upper_hex));

	return (1);
}