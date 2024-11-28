#include "main.h"

int _printfchar(int caracter)
{
	int c = 0;
	if (caracter)
		c = c + write(1, &caracter, 1);
	return (c);
}

int _printfstring(char *cadena)
{
	int s, largo = 0;

	if (cadena == NULL)
		return (-1);
	while (cadena[s] != '\0')
	{
		write(1, &cadena[s], 1);
		largo++;
		s++;		
	}
	return (largo);
}

int _printfinteger(int entero)
{
	int i;


}
