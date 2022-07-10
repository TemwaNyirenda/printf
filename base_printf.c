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
	int i, j, count = 0, *ptr2count = &count;
	va_list vargs;
	all_formats format_func[] = {
		{'c', print_char},
		{'s', print_str}
	};

	va_start(vargs, format);

	if (format == NULL)
		return (0);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 2; j++)/* increase j max w structs */
			{
				if (format[i + 1] == format_func[j].c)
				{
					format_func[j].f(vargs, ptr2count);
					i++;
				}
			}
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			continue;
		}

		_putchar(format[i]);
		count++;
	}
	return (count);
}
