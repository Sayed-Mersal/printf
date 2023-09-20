#include "main.h"
#include <unistd.h>

int print_percent(va_list ap)
{
    (void)ap;
    return (write(1, "%%", 1));
}
