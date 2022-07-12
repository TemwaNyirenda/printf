#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h> /* need for (uintptr_t) */

/**
 * print_pointer - prints a pointer value
 * @vargs: variadic argument string that will be printed
 * @ptr2count: pointer to overall count of characters printed
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 */
void print_pointer(va_list vargs, int *ptr2count, char *buffer, int *buf_index)
{
	int i;
	void *ptr = va_arg(vargs, void *);
	uintptr_t ptr2 = (uintptr_t) ptr; /* converts int to long unsigned */
	char *ptr_str;

	ptr_str = itoa(ptr2, 16);
	if (ptr_str == NULL)
	{
		ptr_str = "(null)";
	}

	if (ptr_str != NULL)
	{
		buffer[*buf_index] = '0';
		*buf_index += 1;
		buffer[*buf_index] = 'x';
		*buf_index += 1;
		*ptr2count += 2;
	}

	for (i = 0; ptr_str[i] != '\0'; i++)
	{

		buffer[*buf_index] = ptr_str[i];
		*buf_index += 1;
		*ptr2count += 1;
	}
}
