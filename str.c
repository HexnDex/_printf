#include "header.h"
/**
 * _strlen - Calculate the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

