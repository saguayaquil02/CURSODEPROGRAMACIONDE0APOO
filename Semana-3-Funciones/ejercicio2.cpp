/*
Tarea- Clase 8 - Ejercicio 2: Número mayor entre dos valores

Autor: Sebastian Guayaquil
Fecha: 11 de mayo del 2026

Enunciado: Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
    • leer los datos,
    • comparar los valores,
    • mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.

E/P/S

Entrada:
    2 numeros enteros

Proceso:
    Declarar las variables necesarias
    Leer los numeros
    comparar los valores
    Establecer condicion para determinar cual de los dos numeros ingresadso es mayor
    o si ambos son iguales

Salida:
    Resultado
*/

/*
PSEUDOCÓDIGO

Algoritmo NumeroMayor

    Definir num1, num2
    Leer 2 numeros
    comparar los valores
    mostrar resultados

    Funcion leerNumeros()
    Funcion compararValores()
    Funcion mostrarResultados()
FinAlgoritmo

Inicio
    leerNumeros(...)
    compararValores(...)
    mostrarResultados(..)

Fin

*/

#include <iostream>
using namespace std;

// Prototipos de funciones
// Colocamos solo nos nombres y parametros de las funciones que vamos a usar
void leerNumeros(int num1, int num2);
int compararValores(int num1,int num2);
void mostrarResultados();

int main(){

    // Declaramos variables para resultados
    int num1, num2;
