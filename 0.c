#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: is a character string composed of zero or more directives
 * Return: number of characters printed
 * (excluding the null byte used to end output to strings)
 */


int _printf(const char *format, ...)
{
	size_t len = 0, i;
	int x;
	char *y;
	va_list ptr;

	va_start(ptr, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			continue;
		}
		if (format[i - 1] == '%' && format[i] == 'c')
		{
			x = va_arg(ptr, int);
			printf("%c", x);
			continue;
		}
		else if (format[i - 1] == '%' && format[i] == 's')
		{
			y = va_arg(ptr, char *);
			printf("%s", y);
			continue;
		}
	}
	va_end(ptr);
	return (len);
}
