#include "header.h"
/**
 * _reverse - Reverse a string
 * @str: String to reverse
 * @length: Length of the string
 */
void _reverse(char *str, int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}

