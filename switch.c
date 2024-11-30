#include "main.h"

int _printfSwitch(char especifico, va_list argumento)
{
	int contador = 0;

	switch (especifico)
			{
				case 'c':
					contador = contador + _printfchar(va_arg(argumento, int));
					break;
				case 's':
					contador = contador + _printfstring(va_arg(argumento, char *));
					break;
				case '%':
					contador = contador + write(1, "%", 1);
					break;
				case 'd':
				case 'i':
					contador = contador + _printfInteger(va_arg(argumento, int));
					break;
				default:
					contador = contador + write(1, "%", 1);
					contador = contador + write(1, &especifico, 1);
					break;
			}
	return (contador);
}
