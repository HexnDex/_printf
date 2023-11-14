#include "header.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			write(1, ptr, 1);
			count++;
		}
		else
		{
			ptr++;
			count += handle_format_specifier(*ptr, args);
		}
	}

	va_end(args);

	return (count);
}

/**
 * handle_format_specifier - Handle the format specifier
 * @specifier: Format specifier character
 * @args: Variable arguments list
 *
 * Return: Number of characters printed
 */
int handle_format_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
	case 'c':
		return (write_char(va_arg(args, int)));
	case 's':
		return (write_string(va_arg(args, char *)));
	case 'd':
	case 'i':
		return (write_int(va_arg(args, int)));
	case 'u':
		return (write_unsign(va_arg(args, unsigned int)));
	case 'o':
		return (write_octal(va_arg(args, unsigned int)));
	case 'x':
		return (write_hex(va_arg(args, unsigned int), 0));
	case 'X':
		return (write_hex(va_arg(args, unsigned int), 1));
	case 'p':
		return (write_address(va_arg(args, void *)));
	case '%':
		return (write(1, "%", 1));
	default:
		write(1, "%", 1);
		write(1, &specifier, 1);
		return (2);
	}
}

/**
 * write_char - Write a character
 * @c: Character to write
 *
 * Return: Number of characters printed
 */
int write_char(int c)
{
	return (write(1, &c, 1));
}

/**
 * write_string - Write a string
 * @str: String to write
 *
 * Return: Number of characters printed
 */
int write_string(char *str)
{
	if (str == NULL)
		str = "(null)";

	return (write(1, str, _strlen(str)));
}

/**
 * write_int - Write an integer
 * @n: Integer to write
 *
 * Return: Number of characters printed
 */
int write_int(int n)
{
	char buffer[20];
	int count = _itoa(n, buffer);

	return (write(1, buffer, count));
}
