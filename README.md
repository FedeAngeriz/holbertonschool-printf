# Custom printf implementation

Este proyecto implementa una version personalizada de la funcion estandar 'printf' de C. La implementacion permite manejar multiples especificadores y tipos de datos, replicando funcionalidades basicas de 'printf'.

## Project Description

El objetivo principal de este proyecto es aprender sobre el uso de:

- Punteros
- Argumentos variadicos('stdarg.h')
- Especificadores de formato
- Manejo de cadenas y enteros en bajo nivel (ej. 'write')

El proyecto consta de una serie de archivos que colaboran para procesar cadenas de formato y producir salidas formateadas.

--------

## Features

Esta implementacion soporta los siguientes especificadores:

| Specifier		         | Description
|-----------------------|-----------------------------------|
| '%c'                  | Imprime un caracter.              |
| '%s'                  | Imprime una cadena de caracteres  |
| '%i' / '%d'           | Imprime un entero                 |
| '%%'                  | Imprime el caracter '%'           |


--------

## Project Files

### 'main.h'

Contiene las declaraciones de las funciones y las librerias necesarias para la implementacion.

### 'main.c'

Archivo principal con un ejemplo de uso de la funcion _printf'. Sirve como punto de entrada para porbar la implementacion.

### '_printf.c'

Define la funcion principal '_printf',  que analiza la cadena de formato y delega el manejo de cada especificador.

### 'functions.c'

Incluye funciones auxiliares para manejar los diferentes tipos de datos y especificadores ('_printfchar', '_printfstring', '_printfInteger')

### 'switch.c'

Contiene la logica de seleccion para pocesar cada especificador usando estructura 'switch'.

--------

### Topics Documented

### 1. Punteros

Se utilizan para manejar cadenas y proccesar datos dinamicos.

Ejemplo:
- char *cadena - permite iterar y escribir caracter de una cadena.

### 2. Return Values

Cada funcion devuelve la cantidad de caracteres impresos. Esto es crucial para calcular la longitud total de la salida.

### 3. Flowchart

A continuacion se muestra un diagrama de flujo simplificado del funcionamiento de '_printf':

Inicio | ¿Cadena vacia? | Si --> Rentorna -1 | No --> Iterar por la cadena |
¿Es '%'? | Si --> Procesar especificador | No --> Imprimir caracter | Siguiente caracter | Fin de la cadena | Retorna contador

### 4. Variadic Arguments

Se usan para aceptar un numero arbitrario de argumentos y procesarlos segund el especificador.

------

### Use Cases: Inputs and Expected Outputs

### Example 1: Simple String

Entrada
_printf("Hello, World!\n");

Salida
Hello, World!

### Example 2: Manage of integers

Entrada
_printf("Valor: %d\n", 42);

Salida
Valor: 42

### Example 3: Characters and strings

Entrada
_printf("Letra: %c, Palabra: %s\n", 'A', "Texto");

Salida
Letra: A, Palabra: Texto

### Example 4: Unknown specifiers

Entrada
_printf("Desconocido: %r\n");

Salida
Desconocido: %r

### Specifiers

| Type		    |	Used function
|---------------|---------------------------|
| %c		       |	_printfchar	              |
| %s		       |	_printfString	           |
| %i		       |	_printfInteger	           |
| %d		       |	_printfInteger	           |
| Otros		    |	_printfSwitch	           |

### How to use the project

1. Clona el Repositorio.
2. Compila los archivos con el siguiente comando:
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
3. Ejecuta el programa:
   ./a.out

### Notes

- Esta implementaccion no es completamente equivalente a printf. Solo cubre un subconjunto de sus funcionalidades.
- Los casos de error estan manejados de manera basica, por ejemplo, cadenas vacias o especificadores incorrectos.

### Autors

| Federico Angeriz |
