#include "header.h"

/**
 * _print_int - Print an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int _print_int(int n)
{
	char buffer[20];
	int count = 0;

	count = _itoa(n, buffer);

	write(1, buffer, count);

	return (count);
}
