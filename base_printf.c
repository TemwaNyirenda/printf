#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - prints a string using _putchar
 * @format: the string to be printed
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0, *ptr2count = &count, check;
	va_list vargs;

	va_start(vargs, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
				i++;
			if (format[i + 1] == '\0')
				return (-1);

			check = format_spec_match(format[i + 1], vargs,
				ptr2count); /* check if there was a match */
			if (check != 0) /* there was a match */
			{
				i++;
				continue;
			}
		}
		_putchar(format[i]);
		count++;
	}
	va_end(vargs);

	return (count);
}
