#include "main.h"

int _printf(const char *format, ...)
{
	int i, contador = 0;
	char c;
	char *cadena;
	va_list argumento;

	if (format == NULL)
		return (-1);

	va_start(argumento, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(argumento, int);
					contador = contador + write(1, &c, 1);
					break;
				case 's':
					cadena = va_arg(argumento, char *);
					if (cadena == NULL)
						cadena = "null";
					contador = contador + write(1, &cadena[i], 1);
					break;
				case '%':
					contador = contador + write(1, "%", 1);
					break;
			}
		}
		else
			contador = contador + write(1, &format[i], 1);
	}
	va_end(argumento);
	return (contador);
}
