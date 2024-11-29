#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printfchar(int caracter);
int _printfstring(char *cadena);
int _printfInteger(int n);
int _printfSwitch(char especifico, va_list argumento);

#endif
