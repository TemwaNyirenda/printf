#include "main.h"

/**
 * format_spec_match - checks if there is a format specification match
 *	and if there is, sends it to respective function
 * @c: character to be checked if it matches any format specification
 * @vargs: variadic list of arguments from base_printf
 * @ptr2count: overall count of characters printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: last index of buffer
 *
 * Return: 1 if there was a match, 0 if there wasn't a match
 */
int format_spec_match(char c, va_list vargs, int *ptr2count, char *buffer,
		int *buf_index)
{
	all_formats format_func[] = {
		{'%', print_perc},
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}
	};
	int j;

	for (j = 0; j < 10; j++) /* increase j max w structs */
	{
		if (c == format_func[j].c)
		{
			format_func[j].f(vargs, ptr2count, buffer, buf_index);
			return (1);
		}
	}

	return (0);
}
