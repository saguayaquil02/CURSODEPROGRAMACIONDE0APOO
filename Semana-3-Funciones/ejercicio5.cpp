/*
Tarea- Clase 8 - Ejercicio 5: Contador actualizado con referencia

Autor: Sebastian Guayaquil
Fecha: 15 de mayo del 2026

Enunciado: Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.

E/P/S

Entrada:
    un numero entero positivo n

Proceso:
    Declarar las variables necesarias
    Leer n
    Ocupar un bucle while para con un contandor desde 0 hasta n

Salida:
    el valor del contador en cada incremento.
*/

/*
PSEUDOCÓDIGO

Algoritmo ContadorActualizado

    Definir n, contador como entero
    Leer n 
    inicilizar contador = 0
    
    Mientras contador < n
        Funcion incrementarcontador()
        Funcion mostrarcontador()

    FinMientras

FinAlgoritmo

Inicio
    leerNumer(...)
    incrementarContador(...)
    mostrarContador(...)

Fin

*/

#include <iostream>
using namespace std;

// Prototipos de funciones
// Colocamos solo nos nombres y parametros de las funciones que vamos a usar
void leerNumero(int &n);
void incrementarContador(int &contador);
void mostrarContador(int contador);

int main() {

    int n;
    int contador = 0;

    leerNumero(n);

}

// Funcion para que el usuario ingrese un numero, pero que no sea negativo
void leerNumero(int &n){

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    while (n <= 0) {
        cout << "Error. Ingrese un numero positivo: ";
        cin >> n;
    }
}

// Función que modifica el contador (PASO POR REFERENCIA)
void incrementarContador(int &contador) {
    contador++;
}

// Mostrar valor del contador
void mostrarContador(int contador) {
    cout << "Contador: " << contador << endl;
}