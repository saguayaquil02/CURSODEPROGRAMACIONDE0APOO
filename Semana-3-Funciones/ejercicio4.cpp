/*
Tarea- Clase 8 - Ejercicio 4: Intercambio de dos números

Autor: Sebastian Guayaquil
Fecha: 15 de mayo del 2026

Enunciado: Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio,
• realizar el intercambio usando una función,
• mostrar los valores después del intercambio.

E/P/S

Entrada:
    los 2 numeros enteros

Proceso:
    Declarar las variables necesarias
    Leer los datos
    mostrar los valores antes del intercambio
    realizar el intercambio usando una función
    mostrar los valores después del intercambio


Salida:
    valores despues del intercambio
*/

/*
PSEUDOCÓDIGO

Algoritmo IntercambioNumeros

    Definir num1, num2 como enteros
    Leer num1 y num2
    condicion para intercambiar sus valores

    Funcion leerDatos()
    Funcion mostrarValores()
    Funcion intercambiar()

FinAlgoritmo

Inicio
    leerDatos(...)
    mostrarValores(...)
    intercambiar(...)


Fin

*/

#include <iostream>
using namespace std;

// Prototipos de funciones
// Colocamos solo nos nombres y parametros de las funciones que vamos a usar
void leerDatos(int &num1, int &num2);
void mostrarValores(int a, int b);
void intercambiar(int &a, int &b);


int main() {

    // Declaramos las variables para los resultados
    int num1, num2;

    // Llamamos a la funcion para leer los datos
    leerDatos(num1, num2);

    // Llamada a la funcoin para mostrar los valores
    cout << "\nValores antes del intercambio: " << endl;
    mostrarValores(num1, num2);

    // Llamada a la funcoin Intercambiar
    intercambiar(num1, num2);

    cout << "\nValores despues del intercambio: " << endl;
    // Llamada a la funcoin para mostrar los valores
    mostrarValores(num1, num2);

    return 0;
}

// Funcion para pedir al usuario que ingrese los datos
void leerDatos(int &num1, int &num2){
    
    // Indicar al usuario que ingreselos 2 numeros
    cout << "\n---- Intercambio de numeros -----" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;
}

// Funcoin paramMostrar valores ingresados
void mostrarValores(int a, int b) {
    cout << "Numero 1: " << a << endl;
    cout << "Numero 2: " << b << endl;
}

// Función para intercambiar
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
