#include "main.h"
#include <stddef.h>

/**
 * format_flag - checks if there is a flag & matches with format specification
 * @format: pointer to the format
 * @format_i: index of format
 * @vargs: variadic list of arguments from base_printf
 * @ptr2count: overall count of characters printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: last index of buffer
 *
 * Return: 1 if there was a match, 0 if there wasn't a match
 */
int format_flag(const char *format, int *format_i, va_list vargs,
		int *ptr2count, char *buffer, int *buf_index)
{
	all_flags flags[] = {
		{'+', 'd', 1}, {'+', 'i', 1}, {'+', 'p', 1},
		{' ', 'd', 2}, {' ', 'i', 2}, {' ', 'p', 2},
		{'#', 'o', 3}, {'#', 'x', 3}, {'#', 'X', 3},
		{'\0', '\0', 0}
	};
	int check, j, l, k = *format_i + 1, i = k, f = 0, *flag = &f;

	for (j = 0; flags[j].flag != '\0'; j++)
	{
		if (format[i] == flags[j].flag)
		{
			k++;
			while (format[k] == ' ')
				k++;
			for (l = j; flags[l].flag != '\0'; l++)
			{
				if (format[i] == flags[l].flag &&
					format[k] == flags[l].c)
				{
					*flag += flags[l].ref;
					*format_i += 1;
					break;
				}
			}
			if (flag != 0)
				break;
		}
	}

	check = format_spec_match(format[k], vargs, ptr2count, buffer,
			buf_index, flag);

	return (check);
}
