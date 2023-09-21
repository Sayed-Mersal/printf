#include "main.h"
#include <unistd.h>

int print_int(va_list ap)
{
	int num = va_arg(ap, int);
	int printed_chars = 0;
	int divisor = 1;

	if (num < 0)
	{
	printed_chars += write(1, "-", 1);
	num = -num;
	}

	while ((num / divisor) >= 10)
	divisor *= 10;

	while (divisor > 0)
	{
	int digit = (num / divisor) % 10;
	char digit_char = '0' + digit;
	printed_chars += write(1, &digit_char, 1);
	divisor /= 10;
	}

	return (printed_chars);
}
