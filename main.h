#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
<<<<<<< HEAD
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h> /**added**/
#include <stdio.h> /**added**/

int _putchar(char c);
int _printf(const char *format, ...);
int print_integer(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int printf_rev(va_list args); /**added*/
int rev_string(char *s); /**added**/
int printf_rot13(va_list args); /**added**/
/**
 * itoa - converts integer to a string
 */
char *itoa(long int, int);
void print_perc(va_list __attribute__ ((unused)) vargs, int *ptr2count);
void print_char(va_list vargs, int *ptr2count);
void print_str(va_list vargs, int *ptr2count);
=======

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
>>>>>>> 892691c96f1c9f8c9dd59cde53a4d0347f9d343b

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
