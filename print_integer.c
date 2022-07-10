#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_integer - Print a number in base 10
 * itoa - converts integer to a string
 * @list: Number to print in base 10
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
