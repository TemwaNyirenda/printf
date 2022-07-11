#include "main.h"
#include <stddef.h>
#include <stdarg.h>

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * print_hexadecimal_upp - Print a number in hexadecimal format
 * @vargs: Number to print
 * @ptr2count: pointer to overall count of printed characters
 * @buffer: buffer where all chars will be printed
 * @buf_index: current index of buffer
 *
 * Return: nothing (void)
 **/
void print_hexadecimal_upp(va_list vargs, int *ptr2count, char *buffer,
		int *buf_index)
{
	char *p_buff;
	int i;

	p_buff = itoa(va_arg(vargs, unsigned int), 16);

	if (p_buff == NULL)
	{
		p_buff = "(null)";
	}
	else
		p_buff = string_to_upper(p_buff);

	for (i = 0; p_buff[i] != '\0'; i++)
	{
		buffer[*buf_index] = p_buff[i];
		*buf_index += 1;
		*ptr2count += 1;
	}
}

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
