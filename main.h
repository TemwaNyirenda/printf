#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int format_spec_match(char c, va_list vargs, int *ptr2count, char *buffer,
		int *buf_index, int *flag);
int format_flag(const char *format, int *format_i, va_list vargs,
                int *ptr2count, char *buffer, int *buf_index);

/* Prints chars and strings */
void print_perc(va_list __attribute__ ((unused)) vargs, int *ptr2count,
	char *buffer, int *buf_index, int __attribute__ ((unused)) *flag);
void print_char(va_list vargs, int *ptr2count, char *buffer, int *buf_index,
	int __attribute__ ((unused)) *flag);
void print_str(va_list vargs, int *ptr2count, char *buffer, int *buf_index,
	int __attribute__ ((unused)) *flag);

/* Prints integers */
void print_int(va_list vargs, int *ptr2count, char *buffer, int *buf_index,
	int *flag);
char *itoa(long int num, int base);

/* Prints binary */
void print_binary(va_list vargs, int *ptr2count, char *buffer, int *buf_index,
	int __attribute__ ((unused)) *flag);

/* Prints unsigned integer, octals, hexadecimals (lowercase & uppercase) */
void print_unsigned(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int __attribute__ ((unused)) *flag);
void print_octal(va_list args, int *ptr2count, char *buffer, int *buf_index,
	int *flag);
void print_hexadecimal_low(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int *flag);
void print_hexadecimal_upp(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int *flag);

/* Prints string where non-printable chars are replace w "\x" and hex ASCII */
void print_capitalS(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int __attribute__ ((unused)) *flag);

/* Prints a pointer address */
void print_pointer(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int *flag);

/* Prints reversed string */
void print_rev_str(va_list vargs, int *ptr2count, char *buffer,
	int *buf_index, int __attribute__ ((unused)) *flag);

/* Prints a rot13'd string */
void print_rot13(va_list vargs, int *ptr2count, char *buffer, int *buf_index,
	int __attribute__ ((unused)) *flag);

/* Support functions */
int is_lowercase(char c);
char *string_to_upper(char *s);
int _strlen(char *s);

/**
 * format_list - a struct with matching format specifiers with their functions
 * @c: format specifier
 * @f: function associated with that format specifier
 */
typedef struct format_list
{
	char c;
	void (*f)(va_list vargs, int *ptr2count, char *buffer, int *buf_index,
			int *flag);
} all_formats;

/**
 * flag_list - a struct with matching format specifiers with their functions
 * @c: format specifier
 * @f: function associated with that format specifier
 */
typedef struct flag_list
{
	char flag;
	char c;
	char ref;
} all_flags;

#endif
