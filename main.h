#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_perc(va_list __attribute__ ((unused)) vargs, int *ptr2count);
void print_char(va_list vargs, int *ptr2count);
void print_str(va_list vargs, int *ptr2count);
void print_int(va_list vargs, int *ptr2count);
char *itoa(long int num, int base);

/**
 * format_list - a struct with matching format specifiers with their functions
 * @c: format specifier
 * @f: function associated with that format specifier
 */
typedef struct format_list
{
	char c;
	void (*f)(va_list vargs, int *ptr2count);
} all_formats;

#endif
