#include "main.h"

int _printf(const char *format, ...)
{
	int i, contador;
	va_list argumento;

	if (format == NULL)
		return (-1);

	va_start(argumento, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' || format[i] == '\0')
		{
			i++;
			return (-1);

			switch (format[i])
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
				case 'd':
				case 'i':
					_printfinteger(va_arg(argumento, int));
					break;
				default:
					contador = contador + write(1, &format[i], 1);
					break;
			}
		}
		else
			contador = contador + write(1, &format[i], 1);
	}
	va_end(argumento);
	return (contador);
}
