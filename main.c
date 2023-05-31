#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	int len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');	
	
	printf("%d , %d",len,len2);

	return(0);
}
