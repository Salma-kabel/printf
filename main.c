#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;

	len = _printf("%p", NULL);
	fflush(stdout);
	printf("\n%d\n",len);
	return (0);
}
