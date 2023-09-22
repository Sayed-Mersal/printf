#include "main.h"
#include <unistd.h>

/**
 * print_percent - prints percentage symbole
 * Return: percent
 * @ap:pass a variable number of arguments to a function
*/

int print_percent(va_list ap)
{
	(void)ap;
	return (write(1, "%", 1));
}
