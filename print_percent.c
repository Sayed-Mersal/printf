#include "main.h"

int print_percent(va_list ap)
{
    (void)ap; // Unused
    return write(1, "%", 1);
}
