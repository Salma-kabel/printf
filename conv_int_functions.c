#include "main.h"


/**
 * b_specifier - handles b specifier
 * @n: integer
 * Return: length of pointer
 */
int b_specifier(unsigned int n)
{
	char *binary;

	binary = itoa(n, 2);
	write(1, binary, strlen(binary));
	return (strlen(binary));
}

/**
 * o_specifier - handles o specifier
 * @n: integer
 * Return: length of pointer
 */
int o_specifier(unsigned int n)
{
	char *oct;

	oct = itoa(n, 8);
	write(1, oct, strlen(oct));

	return (strlen(oct));
}

/**
 * x_specifier - handles x specifier
 * @n: integer
 * Return: length of pointer
 */
int x_specifier(unsigned int n)
{
	char *hex;

	hex = itoa(n, 16);
	write(1, hex, strlen(hex));

	return (strlen(hex));
}

/**
 * X_specifier - handles X specifier
 * @n: integer
 * Return: length of pointer
 */
int X_specifier(unsigned int n)
{
	char *upper_hex;

	upper_hex = itoa(n, 16);
	to_upper(upper_hex);
	write(1, upper_hex, strlen(upper_hex));

	return (strlen(upper_hex));
}
