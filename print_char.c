#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a char
 * @vargs: the variadic argument char to be printed
 * @ptr2count: ptr to count of overall printed characters
 *
 * Return: nothing (void)
 */
void print_char(va_list vargs, int *ptr2count)
{
	char c = va_arg(vargs, int);

	_putchar(c);
	*ptr2count += 1;

	return;
}
