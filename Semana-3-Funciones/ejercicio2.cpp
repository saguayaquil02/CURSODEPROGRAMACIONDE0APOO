/*
Tarea- Clase 8 - Ejercicio 2: Número mayor entre dos valores

Autor: Sebastian Guayaquil
Fecha: 15 de mayo del 2026

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
void leerNumeros(int &num1, int &num2); // usamos paso por referencia
int compararValores(int num1, int num2);
void mostrarResultados(int num1, int num2, int resultado);

int main(){

    // Declaramos variables para resultados
    int num1, num2, resultado;

    // Llamamos a la funcion para leer los numeros ingresados por el usuario
    leerNumeros(num1, num2);

    // Llamamos a la funcion compararValores y el retorno lo guardamos en una variable
    resultado = compararValores(num1, num2);

    mostrarResultados(num1, num2, resultado);

    return 0;
}



// Esta funcion lee 2 numeros ingresados por el usuario
void leerNumeros(int &num1, int &num2){

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
}

// esta funcion calula la suma de los numeros ingresados en el arreglo 

int compararValores(int num1, int num2){

    if(num1 > num2)
        return 1;
    else if(num2 > num1)
        return -1;
    else
        return 0;
}

// esta funcion muestra los resultados obtenidos
void mostrarResultados(int num1, int num2, int resultado){

    if(resultado == 1)
        cout << "\nEl numero " << num1 << " es mayor que " << num2 << endl;
    else if(resultado == -1)
        cout << "\nEl numero " << num2 << " es mayor que " << num1 << endl;
    else
        cout << "\nAmbos numeros son iguales." << endl;
}