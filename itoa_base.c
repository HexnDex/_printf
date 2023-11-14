#include "header.h"
/**
 * _itoa_base - Convert an unsigned integer to a string with a given base
 * @n: Unsigned integer to convert
 * @buffer: Buffer to store the result
 * @base: Base for conversion
 *
 * Return: Number of characters in the string
 */
int _itoa_base(unsigned int n, char *buffer, int base)
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
		int rem = n % base;

		buffer[i++] = (rem < 10) ? rem + '0' : rem - 10 + 'a';
		n = n / base;
	}

	buffer[i] = '\0';

	_reverse(buffer, i);

	return (i);
}
