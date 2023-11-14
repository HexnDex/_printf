#include "header.h"
/**
 * _print_address - Print a pointer address
 * @p: Pointer to print
 *
 * Return: Number of characters printed
 */
int _print_address(void *p)
{
	char buffer[20];
	int count = 0;

	count = _itoa_base((unsigned long)p, buffer, 16);

	write(1, "0x", 2);
	write(1, buffer, count);

	return (count + 2);
}
