#ifndef _HEADER_H_
#define _HEADER_H_


/*standard libraries*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*function prototypes*/
int _printf(const char *format, ...);
int _strlen(const char *s);
int _print_unsigned(unsigned int n);
int _print_int(int n);
int _print_octal(unsigned int n);
int _print_hex(unsigned int n, int uppercase);
int _print_address(void *p);
int _itoa(int n, char *buffer);
int _utoa(unsigned int n, char *buffer);
void _reverse(char *str, int length);
int _itoa_base(unsigned int n, char *buffer, int base);
void _toupper(char *str);
int write_char(int c);
int write_address(void *p);
int write_hex(unsigned int n, int uppercase);
int write_octal(unsigned int n);
int write_unsign(unsigned int n);
int write_int(int n);
int write_string(char *str);
int handle_format_specifier(char specifier, va_list args);

#endif /* HEADER_H */

