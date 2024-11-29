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
		if (format[i] == '%')
		{
			i++;
			contador += _printfSwitch(format[i], argumento);
		}
		els
		{
			write(1, &format[i], 1);
			contador++;
		}
	}
	va_end(argumento);
	contador--;
	return (contador);
}
