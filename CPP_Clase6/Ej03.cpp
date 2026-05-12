/*
Tarea- Clase 6 - Ejercicio 3: Tabla de multiplicar repetitiva

Autor: Sebastian Guayaquil
Fecha: 09 de mayo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
tabla de multiplicar del 1 al 10.
Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada correctamente.

E/P/S

Entrada:
    Un numero entero ingresado por el usuario

Proceso:
    Mostrar el menu
    Leer la opcion
    Si la opcion es 1:
        pedir un numero entero
        mostrar su tabla del 1 al 10 
    Si la opcion es 2:
        mostrar un mensaje de salida
    Si la opcion es invalida
        mostrar un mensaje de error
    Repetir mientras la opcion sea diferente de 2

Salida:
    tabla de multiplicar 
    mensaje de salida
    mensaje de error por opcion invalida

*/

/*
Proceso TablaDeMultiplicarRepetitiva
    Definir opcion, numero, i como Entero

    Hacer 
        Escrbir ""==== MENU ====""
        Escribir "1. Mostrar tabla de multiplicar"
        Escribir "2. salir"
        Escribir "Selecione la opcion: "
        Leer opcion

        Si opcion == 1 Entonces
            Escribir "Ingrese un numero: "
            Leer numero

            Para i = 1 Hasta 10 Hacer
                Escribir numero, "x", i, "=", numero * i
            FinPara 

        Sino
            Si funcion = 3 Entonces
                Escribir "Saliendo del programa..."
            Sino
                Escribir "Error: opcion invalida. Intente nuevamente."
            FinSi   
        FinSi

    Mientras opcion !=2

FinProceso

*/

#include <iostream>
using namespace std;

int main(){
    // Declaramos las variables necesarias
    int opcion, numero, i;

    // Usamos do while porque queremos que el menu se muestre al menos una vez
    do
    {
        cout << "\n============= MENU =============" << endl;
        cout << "1. Mostrar tabla de Multiplicar" << endl;
        cout << "2. Salir" << endl;
        cout << "Selecione una opcion: ";
        cin >> opcion;

        // Evaluamos la opcion elegida
        if (opcion == 1)
        {
            // Pedimos un numero para mostrar su tabla de multiplicar
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Mostramos la tabla del 1 al 10 usando el for
            for (i = 1; i <= 10; i++)
            {
                cout << numero << " x " << i << " = " << numero * i << endl;
            }
            // Mostrar mensaje La tabla fue generada correctamente
            cout << "La tabla fue generada correctamente." << endl;
        }
        else if (opcion == 2)
        {
            // Mostramos un mensaje de salida
            cout << "Saliendo del programa..." << endl;
        }
        else
        {
            // Si la opcion no esta en el rango valido, mostramos un error
            cout << "Error: opcion invalida. Intente nuevamente" << endl;
        }
        // El menu seguira repitiendose mientras la opcion sea diferente de 2
    } while (opcion != 2);

    return 0;

}