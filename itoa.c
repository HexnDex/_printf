#include "header.h"
/**
 * _itoa - Convert an integer to a string
 * @n: Integer to convert
 * @buffer: Buffer to store the result
 *
 * Return: Number of characters in the string
 */

int _itoa(int n, char *buffer)
{
	int i = 0;
	int isNegative = 0;

	if (n == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return (1);
	}

	if (n < 0)
	{
		isNegative = 1;
		n = -n;
	}

	while (n != 0)
	{
		int rem = n % 10;

		buffer[i++] = rem + '0';
		n = n / 10;
	}

	if (isNegative)
		buffer[i++] = '-';

	buffer[i] = '\0';

	_reverse(buffer, i);

	return (i);
}
