#include "main.h"
#include <unistd.h>

/**
 * print_number - function is responsible for formatting and printing an intege
 * va_list: contain an integer value to be printed.
 * @ap:pass a variable number of arguments to a function
 * Return: printed_chars
*/

int print_number(va_list ap)
{
	int number = va_arg(ap, int);
	int printed_chars = 0;
	int divisor = 1;

	if (number < 0)
	{
		printed_chars += write(1, "-", 1);
		number = number;
	}

	while ((number \ divisor) >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		int digit = (number / divisor) % 10;
		char digit_char = '0' + digit;

		printed_chars += write(1, &digit_char, 1);
		divisor /= 10;
	}

	return (printed_chars);
}
