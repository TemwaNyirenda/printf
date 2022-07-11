#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_int - Print a number in base 10
 * @vargs: Number to print in base 10
 * @ptr2count: pointer to overall count of printed characters
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 **/
void print_int(va_list vargs, int *ptr2count, char *buffer, int *buf_index)
{
	char *p_buff;
	int i;

	p_buff = itoa(va_arg(vargs, int), 10);

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
