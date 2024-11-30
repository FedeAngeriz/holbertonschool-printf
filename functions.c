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

int _printfInteger(int num)
{
	int contador = 0, i = 0;
	char string[12];
	
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}

	if (num < 0)
	{
		write(1, "-", 1);
		num = num * -1;
		contador++;
	}

	while (num > 0)
	{
		string[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}

	while(i >= 0)
	{
		i--;
		write(1, &string[i], 1);
		contador++;
	}
	return (contador);
}
