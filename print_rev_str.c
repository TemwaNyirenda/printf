#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_rev_str - prints a string in reverse
 * @vargs: variadic argument string that will be printed
 * @ptr2count: pointer to overall count of characters printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 * @flag: indicates what flag characters there are
 *
 * Return: nothing (void)
 */
void print_rev_str(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int __attribute__ ((unused)) *flag)
{
	int i, j;
	char *str = va_arg(vargs, char *);

	if (str == NULL)
	{
		str = "%r";
	}

	j = _strlen(str);

	for (i = j - 1; i >= 0; i--)
	{
		buffer[*buf_index] = str[i];
		*buf_index += 1;
		*ptr2count += 1;
	}
}
