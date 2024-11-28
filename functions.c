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

int _printfInteger(int n, int *contador)
{
	int num, i = 0;
	char string[12];

	if (n < 0)
	{
		write(1, "-", 1);
		n = -1;
	}

	while (n > 0)
	{
		string[i++] = (n % 10) + '0';
		n /= 10;
	}
}
