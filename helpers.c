#include "main.h"
#include <stdio.h>


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
 * tostring - converts an int to string
 * @str: array to store the string
 * @num: integer
 */
void tostring(char str[], int num)
{
	int i, rem, len = 0, n;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
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

/**
 * itoa - integer to ascii
 * @num: num
 * @base: base
 * src: https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407
 * Return: ponter to char
 **/
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

/**
 * to_upper - iconvert string to uppere case.
 * @s: string to convert
 **/
void to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

	}

}
