#include "main.h"

/**
 * custom_print_string - print a string
 * va_list: a pointer to a character string to be printed
 * @ap:pass a variable number of arguments to a function
 * Return: number of chars printed
 */

int custom_print_string(va_list ap)
{
	char *input_str = va_arg(ap, char *);
	int string_length = 0;

	if (input_str == NULL)
		input_str = "(null)";

	while (input_str[string_length])
		string_length++;

	return (write(1, input_str, string_length));

}
