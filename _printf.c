#include "main.h"

int _printf(const char *format, ...)
{
	int i, contador = 0;
	va_list argumento;

	if (format == NULL)
		return (-1);

	va_start(argumento, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		contador++;
		if (format[i] == '%')
		{
			i++;
			_printfSwitch(format[i], argumento);
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	va_end(argumento);
	return (contador);
}
