#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_unsigned - Print a unsigned int
 * @vargs: Number to print
 * @ptr2count: pointer to overall count of printed characters
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 * @flag: indicates what flag characters there are
 *
 * Return: nothing (void)
 **/
void print_unsigned(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int __attribute__ ((unused)) *flag)
{
	char *p_buff;
	int i;

	p_buff = itoa(va_arg(vargs, unsigned int), 10);

	if (p_buff == NULL)
	{
		p_buff = "(null)";
	}

	for (i = 0; p_buff[i] != '\0'; i++)
	{
		buffer[*buf_index] = p_buff[i];
		*buf_index += 1;
		*ptr2count += 1;
	}
}
