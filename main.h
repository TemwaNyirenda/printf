#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_integer(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
/**
 * itoa - converts integer to a string
 */
char *itoa(long int, int);
void print_perc(va_list __attribute__ ((unused)) vargs, int *ptr2count);
void print_char(va_list vargs, int *ptr2count);
void print_str(va_list vargs, int *ptr2count);

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
