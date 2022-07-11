#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int format_spec_match(char c, va_list vargs, int *ptr2count, char *buffer,
		int *buf_index);

/* Task #0 */
void print_perc(va_list __attribute__ ((unused)) vargs, int *ptr2count,
		char *buffer, int *buf_index);
void print_char(va_list vargs, int *ptr2count, char *buffer, int *buf_index);
void print_str(va_list vargs, int *ptr2count, char *buffer, int *buf_index);

/* Task #1 */
void print_int(va_list vargs, int *ptr2count, char *buffer, int *buf_index);
char *itoa(long int num, int base);

/* Task #2 */
void print_binary(va_list vargs, int *ptr2count, char *buffer, int *buf_index);

/*Task #3 */
void print_unsigned(va_list vargs, int *ptr2count, char *buffer,
		int *buf_index);
void print_octal(va_list args, int *ptr2count, char *buffer, int *buf_index);
void print_hexadecimal_low(va_list vargs, int *ptr2count, char *buffer,
		int *buf_index);
void print_hexadecimal_upp(va_list vargs, int *ptr2count, char *buffer,
		int *buf_index);
int is_lowercase(char c);
char *string_to_upper(char *s);

/* Task #5 */
void print_capitalS(va_list vargs, int *ptr2count, char *buffer,
                int *buf_index);

/**
 * format_list - a struct with matching format specifiers with their functions
 * @c: format specifier
 * @f: function associated with that format specifier
 */
typedef struct format_list
{
	char c;
	void (*f)(va_list vargs, int *ptr2count, char *buffer, int *buf_index);
} all_formats;

#endif
