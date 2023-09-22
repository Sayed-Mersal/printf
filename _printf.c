#include "main.h"
#include <unistd.h>

/**
 * _printf - printf function.
 * @...:variable arguments to be formatted and printed
 * @format: Formatted string in which to print the arguments
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int printed_chars = 0;

	va_start(ap, format);
	while (*format)
	{
	if (*format == '%')
	{
		format++;

		if (*format == '\0')
			break;
		switch (*format)
		{
			case 'c':
				printed_chars += print_char(ap);
				break;
			case 's':
				printed_chars += print_string(ap);
				break;
			case '%':
				printed_chars += print_percent(ap);
				break;
			case 'd':
			case 'i':
				printed_chars += print_int(ap);
				break;
			default:
				printed_chars += write(1, "%", 1);
			break;
		}
	}
		else
	{
		printed_chars += write(1, format, 1);
	}
	format++;
	}
	va_end(ap);
	return (printed_chars);
}
