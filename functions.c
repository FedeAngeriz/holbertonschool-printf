#include "main.h"

/**
 * _printfchar - Funcion para char
 * @caracter: variable que se pasa como valor entero
 * Return: valor almacenado en la variable
 */

int _printfchar(int caracter)
{
	return (write(1, &caracter, 1));
}

/**
 * _printfstring - Funcion para string
 * @cadena: puntero que se pasa como valor char
 * Return: string almacenado en la variable largo
 */

int _printfstring(char *cadena)
{
	int largo = 0;

	if (cadena == NULL)
		cadena = "(null)";
	while (*cadena)
	{
		largo = largo + write(1, cadena, 1);
		cadena++;
	}
	return (largo);
}

/**
 * _printfInteger - Funcion para integer
 * @num: variable que se pasa como valor int
 * Return: valor almacenado en la variable contador
 */

int _printfInteger(int num)
{
	int contador = 0, i = 0, i2;
	char string[12];

	if (num == 0)
	{
		return (write(1, "0", 1));
	}

	if (num == INT_MIN)
	{
		return (write(1, "-2147483648", 11));
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

	for (i2 = i - 1; i2 >= 0; i2--)
	{
		write(1, &string[i2], 1);
		contador++;
	}
	return (contador);
}
