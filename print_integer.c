#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 * Return: Length of th numbers in decimal
 **/
void print_int(va_list vargs, int *ptr2count)
{
	char *p_buff;
	int i;

	p_buff = itoa(va_arg(vargs, int), 10);
	
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
