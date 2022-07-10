#include "main.h"
#include <stdarg.h>

/**
 * print_perc - prints a percentage char
 * @vargs: the variadic argument that won't be used
 * @ptr2count: ptr to count of overall printed characters
 *
 * Return: nothing (void)
 */
void print_perc(va_list __attribute__ ((unused)) vargs, int *ptr2count)
{
	_putchar('%');
	*ptr2count += 1;
}
