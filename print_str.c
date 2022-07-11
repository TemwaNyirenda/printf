#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_str - prints a string
 * @vargs: variadic argument string that will be printed
 * @ptr2count: pointer to overall count of characters printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 */
void print_str(va_list vargs, int *ptr2count, char *buffer, int *buf_index)
{
	int i;
	char *str = va_arg(vargs, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		buffer[*buf_index] = str[i];
		*buf_index += 1;
		*ptr2count += 1;
	}
}
