#include "main.h"
#include <unistd.h>

/**
 * custom_print_char - prints char
 * @ap:pass a variable number of arguments to a function
 * Return: char
*/

int custom_print_char(va_list ap)
{
	char character = va_arg(ap, int);

	return (write(1, &character, 1));
}
