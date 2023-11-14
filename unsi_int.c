#include "header.h"
/**
 * _print_unsigned - Print an unsigned integer
 * @n: Unsigned integer to print
 *
 * Return: Number of characters printed
 */
int _print_unsigned(unsigned int n)
{
	char buffer[20];
	int count = 0;

	count = _utoa(n, buffer);

	write(1, buffer, count);

	return (count);
}
