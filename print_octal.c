#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_octal - Print a unsigned octal
 * @vargs: Number to print
 * @ptr2count: overall count for numbers to be printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 * @flag: indicates what flag characters there are
 *
 * Return: nothing (void)
 **/
void print_octal(va_list vargs, int *ptr2count, char *buffer, int *buf_index,
	int *flag)
{
	char *p_buff;
	int i;

	p_buff = itoa(va_arg(vargs, unsigned int), 8);

	if (p_buff == NULL)
	{
		p_buff = "(null)";
	}

	if (*flag == 3 && p_buff != NULL && p_buff[0] != '0')
	{
		buffer[*buf_index] = '0';
		*buf_index += 1;
		*ptr2count += 1;
	}

	for (i = 0; p_buff[i] != '\0'; i++)
	{
		buffer[*buf_index] = p_buff[i];
		*buf_index += 1;
		*ptr2count += 1;
	}
}
