/*
Tarea- Clase 8 - Ejercicio 1: Suma y promedio de 3 números

Autor: Sebastian Guayaquil
Fecha: 11 de mayo del 2026

Enunciado: Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
    • leer los números,
    • calcular la suma,
    • calcular el promedio,
    • mostrar los resultados.

E/P/S

Entrada:
    3 numeros enteros

Proceso:
    Declarar las variables necesarias
    Leer los numeros
    calcular la suma
    calular el promedio
    mostrar los resultados

Salida:
    El promedio
*/

/*
PSEUDOCÓDIGO

Algoritmo SumaYPromedio

    Definir num1, num2, num3, suma, promedio como real

    Leer 3 numeros
    calcular suma
    calcular promedio
    mostrar la suma y promedio

    Funcion leer3Numeros()
    Funcion calcuLarSuma()
    Funcion calcularPromedio()
    Funcion mostrarResultados()
FinAlgoritmo

Inicio
    leer4Numeros(...)
    suma = calularSuma(...)
    promedio = calcularPromedio(...)
    mostrarResultados(suma, promedio)

Fin

*/

#include <iostream>
using namespace std;

// Prototipos de funciones
// Colocamos solo nos nombres y parametros de las funciones que vamos a usar
void leer3Numeros(double numeros[], int n);
double calcularSuma(double numeros[], int n);
double calcularPromedio(double suma, int n);
void mostrarResultados(double suma, double promedio);

int main(){

    // Declaramos variables para resultados
    double suma, promedio;

    // declaramos el arreglo
    double numeros[3]; // double porque tambien se pueden ingresar notas con decimales

    // Llamamos a la funcion para ingresar los 3 numeros en el arreglo
    leer3Numeros(numeros, 3);
