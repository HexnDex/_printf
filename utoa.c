#include "header.h"
/**
 * _utoa - Convert an unsigned integer to a string
 * @n: Unsigned integer to convert
 * @buffer: Buffer to store the result
 *
 * Return: Number of characters in the string
 */
int _utoa(unsigned int n, char *buffer)
{
	int i = 0;

	if (n == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return (1);
	}

	while (n != 0)
	{
		int rem = n % 10;

		buffer[i++] = rem + '0';
		n = n / 10;
	}

	buffer[i] = '\0';

	_reverse(buffer, i);

	return (i);
}
