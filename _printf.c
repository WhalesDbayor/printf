#include "main.h"
#include <stdio.h>

/**
 * _printf - takes a string and args of each '%'
 * and prints them
 * @format: initial string containing % +
 * char denoting type and number of args
 * @...: variable list of arguments
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	va_list lst;

	va_start(lst, format);
	for (i = 0; format[i]; i++)
		if (format[i] == '%')
		{
			i++;
			for (; format[i] != '\0'; i++)
			{
				for (j = 0; id[j].id != '\0'; j++)
					if (format[i] == id[j].id)
					{
						count += id[j].fn(lst);
						break;
					}
				if (id[j].id)
					break;
			}
			if (format[i] == '\0')
				return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			count += 1;
		}

	va_end(lst);
	return (count);
}
