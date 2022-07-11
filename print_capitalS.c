#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_capitalS - prints a string
 * @vargs: variadic argument string that will be printed
 * @ptr2count: pointer to overall count of characters printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 */
void print_capitalS(va_list vargs, int *ptr2count, char *buffer, int *buf_index)
{
	int i, j;
	char *str = va_arg(vargs, char *);
	char *hex_str;

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			buffer[*buf_index] = '\\';
			*buf_index += 1;
			buffer[*buf_index] = 'x';
			*buf_index += 1;
			*ptr2count += 2;
			hex_str = itoa(str[i], 16);
			hex_str = string_to_upper(hex_str);
			if (hex_str[1] == '\0')
			{
				buffer[*buf_index] = '0';
				*buf_index += 1;
				*ptr2count += 1;
			}
			for (j = 0; hex_str[j] != '\0'; j++)
			{
				buffer[*buf_index] = hex_str[j];
				*buf_index += 1;
				*ptr2count += 1;
			}
			continue;
		}
		buffer[*buf_index] = str[i];
		*buf_index += 1;
		*ptr2count += 1;
	}
}
