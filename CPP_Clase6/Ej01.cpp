/*
Tarea- Clase 6 - Ejercicio 1: Números pares hasta N

Autor: Sebastian Guayaquil
Fecha: 09 de mayo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
muestre en pantalla todos los números pares desde 1 hasta N.

E/P/S

Entrada:
    Un numero entero positivo N

Proceso:
    Declarar las variables
    Verificar si N es mayor que 0
    Si N no es mayor, mostramos un mensaje de error
    Si N es mayor, usamos un contador que incie en 1
    Realizar el calculo para obtener los numeros pares desde 1 hasta N

Salida:
    Los numeros pares desde 1 hasta N

*/

/*
Proceso NumerosParesHastaN
    Definir N, i, numpar como enteros

    Escribir "Ingrese un numero: "
    Leer N

	Si N <= 0 Entones
        Escribir "Error: el numero debe ser positivo"

    Sino 
        Para i = 1 hasta N Hacer
            numpar = i
            Si (numpar % 2 == 0) 
                Escribir, numpar
            FinSi
        FinPara
    FinSi

FinProceso

*/

#include <iostream>
using namespace std;

int main(){
    // Declarar las variables 
    int N, i, numpar;

    cout << "==== Numeros pares hasta N ====" << endl;
    // Pedimos al usuario que ingrese un numero N
    cout << "Ingrese un numero: ";
    cin >> N;

    // Si N es menor o igual a cero mostrar un mesnaje de error
    if (N <= 0)
    {
        cout << "Error: el numero debe ser positivo ";
    } else {
        // Usamos el for para iniciar el contador en 1 hasta N
        for ( i = 1; i <= N; i++)
        {
            numpar = i;
            // condicion para obtener solo los numeros pares, para calcular el residuo de dividir el número entre 2, si el residuo es 0 entonces el numero es par
            if (numpar % 2 == 0)
            {
                // mostar el numero par
                cout << numpar << endl;
            }
         }
    }
    return 0;
}