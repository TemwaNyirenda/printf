#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_rot13 - prints a rot13'd string
 * @vargs: variadic argument string that will be printed
 * @ptr2count: pointer to overall count of characters printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 */
void print_rot13(va_list vargs, int *ptr2count, char *buffer, int *buf_index)
{
	int i;
	char *str = va_arg(vargs, char *);
	char *rot13_str;

	rot13_str = malloc(sizeof(char) * _strlen(str));
	if (rot13_str == NULL)
		return;

	if (str == NULL)
	{
		str = "(null)";
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if ((str[i] >= 65 && str[i] <= 77) ||
				(str[i] >= 97 && str[i] <= 109))
			{
				rot13_str[i] = str[i] + 13;
			}
			else if ((str[i] >= 78 && str[i] <= 90) ||
				(str[i] >= 110 && str[i] <= 122))
			{
				rot13_str[i] = str[i] - 13;
			}
			else
				rot13_str[i] = str[i];
		}
	}

	for (i = 0; rot13_str[i] != '\0'; i++)
	{
		buffer[*buf_index] = rot13_str[i];
		*buf_index += 1;
		*ptr2count += 1;
	}

	free(rot13_str);
}
