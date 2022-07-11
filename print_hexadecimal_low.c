#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @vargs: Number to print
 * @ptr2count: pointer to overall count of printed characters
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 **/
void print_hexadecimal_low(va_list vargs, int *ptr2count, char *buffer,
		int *buf_index)
{
	char *p_buff;
	int i;

	p_buff = itoa(va_arg(vargs, unsigned int), 16);

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
