#include "header.h"
/**
 *_print_octal - Print an unsigned integer in octal format
 * @n: Unsigned integer to print
 *
 * Return: Number of characters printed
 */
int _print_octal(unsigned int n)
{
	char buffer[20];
	int count = 0;

	count = _itoa_base(n, buffer, 8);

	write(1, buffer, count);

	return (count);
}
