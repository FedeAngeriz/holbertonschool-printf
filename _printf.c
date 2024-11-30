#include "main.h"

/**
 * _printf - Funcion procesar una cadena de formato.
 * @format: puntero
 * Return: Numero total de caracteres impresos
 */

int _printf(const char *format, ...)
{
	int i, contador = 0;
	va_list argumento;


	if (format == NULL || format[0] == '\0')
		return (-1);

	va_start(argumento, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			contador += _printfSwitch(format[i], argumento);
		}
		else
		{
			write(1, &format[i], 1);
			contador++;
		}
	}
	va_end(argumento);
	return (contador);
}
