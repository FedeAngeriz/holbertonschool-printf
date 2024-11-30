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
	int s = 0, largo = 0;

	if (cadena == NULL)
		cadena = "(null)";
	while (cadena[s] != '\0')
	{
		largo = largo + write(1, &cadena[s], 1);
		s++;		
	}
	return (largo);
}

int _printfInteger(int n)
{
	int contador = 0, i = 0;
	char string[12];

	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		contador++;
	}

	while (n > 0)
	{
		string[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}

	while(i >= 0)
	{
		write(1, &string[i], 1);
		contador++;
		i--;
	}
	return (contador);
}
