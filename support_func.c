#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: The string that the length will be calculated on
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != 0)
	{
		if (*s == '\0')
			break;
		s++;
		n++;
	}

	return (n);
}
