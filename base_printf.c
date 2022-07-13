#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - prints a string using _putchar
 * @format: the string to be printed
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, check,  j = 0;
	int *ptr2count = &count, *buf_index = &j, *format_i = &i;
	va_list vargs;
	char *buffer;

	if (format == NULL)
		return (-1);

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);

	va_start(vargs, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			check = format_flag(format, format_i, vargs, ptr2count,
				       buffer, buf_index);/* check for match */
			if (check != 0) /* there was a match */
			{
				i++;
				continue;
			}
		}
		buffer[j] = format[i];
		count++;
		j++;
	}
	va_end(vargs);

	write(1, buffer, count);
	free(buffer);
	return (count);
}
