/*
Tarea- Clase 6 - Ejercicio 2: Suma de 5 números

Autor: Sebastian Guayaquil
Fecha: 09 de mayo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
suma total de esos valores.
Al final, el programa debe mostrar:
• la suma total
• y cuántos números fueron ingresados

E/P/S

Entrada:
    Cinco numeros enteros ingresados por el usuario

Proceso:
    Incializar una variable suma en 0
    Repetir 5 veces:
        pedir un numero
        leer el numero
        sumar ese valor al acumulador

Al final, mostrar la suma total y cuantos numeros fueron ingresados


Salida:
    La suma total de los 5 numeros ingresados y cuantos numeros fueron ingresados.

*/

/*
Proceso SumarCincoNumeros
    Definir i, numero, suma como Entero

    suma = 0

    Para i = 1 hasta 5 Hacer
        Escribir "Ingrese el numero", i, ":"
        Leer numero
        suma = suma + numero
    FinPara

    Escribir "La suma total es", suma
    Escribir "total de numero ingresados: ", i
FinProceso

*/

#include <iostream>
using namespace std;

int main(){
    // Declaramos las variables necesarias
    int i, numero, suma, contador;

    // Inicializar el acumulador y contador en 0
    suma = 0;
    contador = 0;

    cout << "==== Suma de 5 numeros ====" << endl;

    // Usamos un for porque ya sabemos que se repetira 5 veces
    for (i=1; i<=5; i++)
    {
        //Pedimos cada numero al usuario
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        
        // Acumulamos en numero ingresado a la suma total
        suma = suma + numero;
        contador++;
    }

    // Mostrar la suma final y cuanots numeros fueron ingresados
    cout << "La suma total es: " << suma << endl;
    cout << "Total de numeros ingresados: " << contador;
    return 0;

}
