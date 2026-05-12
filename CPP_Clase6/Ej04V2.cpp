/*
Tarea- Clase 6 - Ejercicio 4: Menú repetitivo

Autor: Sebastian Guayaquil
Fecha: 09 de mayo del 2026

Enunciado: Elaborar un programa en C++ que muestre el siguiente menú:
    1. Mostrar el doble de un número
    2. Mostrar el triple de un número
    3. Salir
El programa debe repetirse hasta que el usuario elija la opción 3.
Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
error y volver a mostrar el menú.

E/P/S

Entrada:
    Una opcion del menu
    Segun la opción elegida 
        Obtener el doble del numero
        Obtener el triple del numero

Proceso:
    Mostrar el menu
    Leer la opcion
    Switch 
    Caso opcion es 1:
        pedir un numero
        calulcar el doble del numero
        mostrar el resultado
    Caso la opcion es 2
        pedir un numero
        calulcar el doble del numero
        mostras el resultado
    Caso la opcion es 3:
        mostrar un mensaje de salida
    De otro modo la opcion es invalida
        mostrar un mensaje de error
    Hasta que la opcion sea igual a 3

Salida:
    Opcion 1: El doble de un numero
    Opcion 2: El triple de un numero
    Opcion 3: mensaje de salida
    Opcion invalida: mensaje de error por opcion invalida

*/

/*
Proceso MenuRepetitivo

    Definir opcion, numero, doblenum, triplenum Como Entero

    Hacer
        
        Escribir "========== MENU =========="
        Escribir "1. Mostrar el doble de un numero"
        Escribir "2. Mostrar el triple de un numero"
        Escribir "3. Salir"
        Escribir "Seleccione una opcion: "
        Leer opcion

        Segun opcion Hacer

            1:
                Escribir "Ingrese un numero: "
                Leer numero

                doblenum = 2 * numero

                Escribir "El doble de ", numero, "es: ", doblenum

            2:
                Escribir "Ingrese un numero: "
                Leer numero

                triplenum = 3 * numero

                Escribir "El triple de ", numero, "es: ", triplenum

            3:
                Escribir "Saliendo del programa..."

            De Otro Modo:
                Escribir "Error: opcion invalida. Intente nuevamente."

        FinSegun

     Mientras opcion !=3

FinProceso

*/

#include <iostream>
using namespace std;

int main() {

    // Declaramos las variables necesarias
    int opcion, numero, doblenum, triplenum;

    // Usamos do while porque queremos que el menu se muestre al menos una vez
    do {
        cout << "\n========== MENU ==========" << endl; // uso el \n para hacer un salto de linea
        cout << "1. Mostrar el doble de un numero" << endl;
        cout << "2. Mostrar el triple de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        // Evaluar la opción usando switch
        switch (opcion) {

            case 1: // Si el usuario elige 1
                // Pedimos al usuario que ingrese un numero
                cout << "Ingrese un numero: ";
                cin >> numero;

                // Realizamos el doble del numero ingresado
                doblenum = 2 * numero;

                // Mostrar el resultado
                cout << "El doble de " << numero << " es: " << doblenum << endl;
                break; // Termina este caso y sale del switch

            case 2: // Si el usuario elige 2
                // Pedimos al usuario que ingrese un numero
                cout << "Ingrese un numero: ";
                cin >> numero;

                // Realizamos el triple del numero ingresado
                triplenum = 3 * numero;

                // Mostrar el resultado
                cout << "El trilpe de " << numero << " es: " << triplenum << endl;
                break; // Termina este caso y sale del switch

            case 3:
                // Mostramos un mensaje de salida
                cout << "Saliendo del programa..." << endl;
                break; //  Sale del switch

            default: // Si el usuario escribe una opción inválida
                // Si la opcion no esta en el rango valido, mostramos un error
                cout << "Error: opcion invalida. Intente nuevamente." << endl;
        }
      // El menu seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;
}