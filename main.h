#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_int(va_list ap);
int custom_print_char(va_list ap);
int custom_print_string(va_list ap);
int print_percent(va_list ap);


#endif /* MAIN_H */
