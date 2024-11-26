#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int string = i;
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
					write (1,&c,1);
					break;
			}
		}
	}
	va_end(argumento);
	return (0);
}
