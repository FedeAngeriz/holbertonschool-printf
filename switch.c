#include "main.h"

int _printfSwitch(char especifico, va_list argumento, int *contador)
{
	switch (especifico)
			{
				case 'c':
					_printfchar(va_arg(argumento, int));
					break;
				case 's':
					_printfstring(va_arg(argumento, char *));
					break;
				case '%':
					contador = contador + write(1, "%", 1);
					break;
/*				case 'd':
				case 'i':
					_printfinteger(va_arg(argumento, int));
					break;
*/				default:
					contador = contador + write(1, &especifico, 1);
					break;
			}
	return (*contador);
}
