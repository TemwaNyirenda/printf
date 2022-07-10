#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list vargs, int *ptr2count);

/**
 */
typedef struct format_list
{
	char c;
	void (*f)(va_list vargs, int *ptr2count);
} all_formats;

#endif
