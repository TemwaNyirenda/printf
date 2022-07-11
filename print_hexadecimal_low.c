#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @vargs: Number to print
 * @ptr2count: pointer to overall count of printed characters
 *
 * Return: nothing (void)
 **/
void print_hexadecimal_low(va_list vargs, int *ptr2count)
{
	char *p_buff;
	int i;

	p_buff = itoa(va_arg(vargs, unsigned int), 16);

	if (p_buff == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		*ptr2count += 6;
		return;
	}

	for (i = 0; p_buff[i] != '\0'; i++)
	{
		_putchar(p_buff[i]);
		*ptr2count += 1;
	}
}
