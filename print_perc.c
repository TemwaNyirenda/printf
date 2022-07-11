#include "main.h"
#include <stdarg.h>

/**
 * print_perc - prints a percentage char
 * @vargs: the variadic argument that won't be used
 * @ptr2count: ptr to count of overall printed characters
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 */
void print_perc(va_list __attribute__ ((unused)) vargs, int *ptr2count,
		char *buffer, int *buf_index)
{
	buffer[*buf_index] = '%';
	*buf_index += 1;
	*ptr2count += 1;
}
