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
	int i, j, count = 0, *ptr2count = &count, format_spec_match;
	va_list vargs;
	all_formats format_func[] = {{'%', print_perc}, {'c', print_char},
		{'s', print_str}};

	va_start(vargs, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format_spec_match = 0;
			while (format[i + 1] == ' ')
				i++;
			if (format[i + 1] == '\0')
				return (-1);
			for (j = 0; j < 3; j++) /* increase j max w structs */
			{
				if (format[i + 1] == format_func[j].c)
				{
					format_func[j].f(vargs, ptr2count);
					i++;
					format_spec_match++;
				}
			}
			if (format_spec_match != 0) /* there was a match */
				continue;
		}
		_putchar(format[i]);
		count++;
	}
	va_end(vargs);

	return (count);
}
