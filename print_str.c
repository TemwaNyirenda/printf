#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_str - prints a string
 * @vargs: variadic argument string that will be printed
 * @ptr2count: pointer to overall count of characters printed
 *
 * Return: nothing (void)
 */
void print_str(va_list vargs, int *ptr2count)
{
	int i;
	char *str = va_arg(vargs, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		*ptr2count += 1;
	}
}
