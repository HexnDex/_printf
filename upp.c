#include "header.h"
/**
 * _toupper - Convert a string to uppercase
 * @str: String to convert
 */
void _toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - ('a' - 'A');
		str++;
	}
}
