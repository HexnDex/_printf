#include "header.h"
/**
 * write_unsigned - Write an unsigned integer
 * @n: Unsigned integer to write
 *
 * Return: Number of characters printed
 */
int write_unsign(unsigned int n)
{
	char buffer[20];
	int count = _utoa(n, buffer);

	return (write(1, buffer, count));
}

/**
 * write_octal - Write an unsigned integer in octal format
 * @n: Unsigned integer to write
 *
 * Return: Number of characters printed
 */
int write_octal(unsigned int n)
{
	char buffer[20];
	int count = _itoa_base(n, buffer, 8);

	return (write(1, buffer, count));
}

/**
 * write_hex - Write an unsigned integer in hexadecimal format
 * @n: Unsigned integer to write
 * @uppercase: Whether to use uppercase letters in hexadecimal (1) or not (0)
 *
 * Return: Number of characters printed
 */
int write_hex(unsigned int n, int uppercase)
{
	char buffer[20];
	int count = _itoa_base(n, buffer, 16);

	if (uppercase)
		_toupper(buffer);
	return (write(1, buffer, count));
}

/**
 * write_address - Write a pointer address
 * @p: Pointer to write
 *
 * Return: Number of characters printed
 */
int write_address(void *p)
{
	char buffer[20];
	int count = _itoa_base((unsigned long)p, buffer, 16);

	write(1, "0x", 2);
	return (count + write(1, buffer, count));
}

