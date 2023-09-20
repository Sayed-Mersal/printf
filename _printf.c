#include "main.h"
#include <unistd.h>
/**
 * _printf - printf function.
 * @format: Formatted string in which to print the arguments
 * Return: printed chars.
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
			default:
				printed_chars += write(1, "%", 1);
			break;
				printed_chars++;
			break;
		}
	}
		else
	{
		printed_chars += write(1, format, 1);
		printed_chars++;
	}
	format++;
	}
	va_end(ap);
	return (printed_chars);
}
