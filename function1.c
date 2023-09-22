#include "main.h"
#include <unistd.h>

/**
 * print_char - prints char
 * @ap:pass a variable number of arguments to a function
 * Return: char
*/

int print_char(va_list ap)
{
	char character = va_arg(ap, int);

	return (write(1, &character, 1));
}
