# Simulador-de-Incendios-en-Oficinas
Este código en C++ es un programa que simula un departamento de oficinas y permite al usuario seleccionar una oficina que está en llamas. Luego, muestra una representación visual de las oficinas con alarmas, rociadores y la oficina en llamas en una matriz. A continuación, se describe el código en detalle:

1. Inclusión de bibliotecas:

#include <stdio.h>
#include <conio.h>

El programa incluye las bibliotecas estándar stdio.h y conio.h para manejar la entrada/salida y proporcionar funciones de control de la consola, respectivamente.

2. Declaración de la función printOffice:

void printOffice(int rows, int cols, int x, int y) {

Esta función toma cuatro parámetros: rows (filas), cols (columnas), x (coordenada x de la oficina en llamas) y y (coordenada y de la oficina en llamas).
Imprime una matriz que representa las oficinas con alarmas, rociadores y la oficina en llamas.

3. Función getFirePos:

void getFirePos(int *x, int *y) {

Esta función solicita al usuario que ingrese la oficina en llamas en formato "LetraNumero" (por ejemplo, "A1").
Convierte las coordenadas ingresadas en valores numéricos x e y y los almacena en las direcciones de memoria apuntadas por los punteros x y y.
4. Función main:

int main() {

La función main es el punto de entrada del programa.
5. Declaración de variables:

int rows, cols, x, y, o;

Se declaran las variables para almacenar el número de filas (rows), el número de columnas (cols), las coordenadas x e y de la oficina en llamas y una variable o para la opción del usuario.

6. Solicitar dimensiones del departamento:

printf("Ingrese las dimensiones del número de oficinas en el departamento [x,y]:\n");
scanf("%d,%d", &rows, &cols);

El programa solicita al usuario ingresar las dimensiones del departamento de oficinas en el formato "x,y".

7. Bucle principal:

while (o != 2) {

Se inicia un bucle que se ejecuta mientras la opción del usuario no sea igual a 2 (la opción para salir).

8. Menú de opciones:

printf("1. Seleccionar oficinas\n");
printf("2. Salir\n");
printf("Opcion: ");
scanf("%d", &o);

El programa muestra un menú de opciones y solicita al usuario que elija una opción.

9. Switch para procesar las opciones:

El programa utiliza una estructura switch para manejar las diferentes opciones:
Caso 1: Selección de oficinas:
      Llama a la función getFirePos para obtener las coordenadas de la oficina en llamas.
      Llama a la función printOffice para mostrar la matriz de oficinas con alarmas, rociadores y         la oficina en llamas.
Caso 2: Salir:
      Imprime un mensaje de despedida y sale del programa.
      Opción predeterminada: Maneja entradas inválidas.

En resumen, este programa permite al usuario especificar las dimensiones de un departamento de oficinas, seleccionar una oficina que está en llamas y visualizar una representación visual de las oficinas con alarmas, rociadores y la oficina en llamas en una matriz.
