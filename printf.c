#include "main.h"

/**
 * _printf - prints anything
 * @format: string to print
 * Return: Length of string
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, length = 0;
	char s[] = "NULL";
	if (format == NULL){
		write(1,s,4);
		return (4);
	}
	else if (strlen(format) == 1 && format[0] == '%')
	{		
		_putchar('\n');
		return (0);
	}
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 's' && format[i - 1] == '%')
			length += s_specifier(va_arg(list, char *));
		else if (format[i] == 'c' && format[i - 1] == '%')
			length += c_specifier(va_arg(list, int));
		else if (format[i] == '%' && format[i - 1] == '%' && format[i - 2] != '%')
			length += percent_specifier(format[i]);
		else if ((format[i] == 'd' || format[i] == 'i')  && format[i - 1] == '%')
			length += d_and_i_specifier(va_arg(list, int));
		else if (format[i] == 'b' && format[i - 1] == '%')
			length += b_specifier(va_arg(list, int));
		else if (format[i] == 'u' && format[i - 1] == '%')
			length += u_specifier(va_arg(list, unsigned int));
		else if (format[i] == 'o' && format[i - 1] == '%')
			length += o_specifier(va_arg(list, unsigned int));
		else if (format[i] == 'x' && format[i - 1] == '%')
			length += x_specifier(va_arg(list, unsigned int));
		else if (format[i] == 'X' && format[i - 1] == '%')
			length += X_specifier(va_arg(list, unsigned int));
		else if (format[i] == 'S' && format[i - 1] == '%')
			length += S_specifier(va_arg(list, char *));
		else if (format[i] == 'p' && format[i - 1] == '%')
			length += p_specifier(va_arg(list, void *));
		else if (format[i - 1] == '%' && format[i - 2] != '%')
		{
			length += percent_specifier(format[i - 1]);
			write(1, (format + i), 1);
			length++;
		}
		else if (format[i] != '%')
		{
			write(1, (format + i), 1);
			length++;
		}
	}
	va_end(list);
	return (length);
}
