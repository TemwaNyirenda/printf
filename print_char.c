#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a char
 * @vargs: the variadic argument char to be printed
 * @ptr2count: ptr to count of overall printed characters
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 * @flag: indicates what flag characters there are
 *
 * Return: nothing (void)
 */
void print_char(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int __attribute__ ((unused)) *flag)
{
	char c = va_arg(vargs, int);

	buffer[*buf_index] = c;
	*buf_index += 1;
	*ptr2count += 1;
}
