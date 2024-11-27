#include "main.h"

int _printf(const char *format, ...)
{
	int i, c, s = 0;
	char *cadena;
	va_list argumento;

	if (format == NULL)
		return (-1);

	va_start(argumento, format);

	for (i = 0; format[i] < '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i])
			{
				case 'c':
					cadena = cadena + write(1, &c, 1);
					break;
				case 's':
					cadena = va_arg(argumento, char *);
					if (cadena == NULL)
					{
						cadena = "null";
						break;
					}
					else
					{
						cadena = cadena + write(1, &s, 1);
						break;
					}
				case '%':
					cadena = cadena + write(1, &%, 1);
					break;
			}
		}
	}
	va_end(argumento);
	return (0);
}
