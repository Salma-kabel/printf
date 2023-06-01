#include "main.h"
#include <stdio.h>

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
