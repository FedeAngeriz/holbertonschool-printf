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

			_printfSwitch(format[i], argumento, &contador);
		}
		else
			contador = contador + write(1, &format[i], 1);
	}
	va_end(argumento);
	return (contador);
}
