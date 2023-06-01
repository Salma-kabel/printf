#include "main.h"


/**
 * b_specifier - handles b specifier
 * @n: integer
 * Return: length of pointer
 */
int b_specifier(unsigned int n)
{
	char *binary_ptr;

	binary_ptr = itoa(n, 2);
	write(1, binary_ptr, strlen(binary_ptr));
	return (strlen(binary_ptr));
}

/**
 * o_specifier - handles o specifier
 * @n: integer
 * Return: length of pointer
 */
int o_specifier(unsigned int n)
{
	char *oct_ptr;

	oct_ptr = itoa(n, 8);
	write(1, oct_ptr, strlen(oct_ptr));

	return (strlen(oct_ptr));
}

/**
 * x_specifier - handles x specifier
 * @n: integer
 * Return: length of pointer
 */
int x_specifier(unsigned int n)
{
	char *hex_ptr;

	hex_ptr = itoa(n, 16);
	write(1, hex_ptr, strlen(hex_ptr));

	return (strlen(hex_ptr));
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
