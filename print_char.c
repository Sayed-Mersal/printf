#include "main.h"
#include <unistd.h>

int custom_print_char(va_list ap)
{
    char character = va_arg(ap, int);
    return write(1, &character, 1);
}
