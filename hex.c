#include "header.h"
/**
 * _print_hex - print an unsigned integer in hexadecimal format
 * @n: Unsigned integer to print
 * @uppercase: Whether to use uppercase letters in hexadecimal (1) or not (0)
 *
 * Return: Number of characters printed
 */
int _print_hex(unsigned int n, int uppercase)
{
	char buffer[20];
	int count = 0;

	count = _itoa_base(n, buffer, 16);

	if (uppercase)
		_toupper(buffer);

	write(1, buffer, count);

	return (count);
}
