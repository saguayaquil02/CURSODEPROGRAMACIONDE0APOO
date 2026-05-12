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
    Si la opcion es 1:
        pedir un numero
        calulcar el doble del numero
        mostrar el resultado
    Si la opcion es 2
        pedir un numero
        calulcar el triple del numero
        mostras el resultado
    Si la opcion es 3:
        mostrar un mensaje de salida
    Si la opcion es invalida
        mostrar un mensaje de error
    Repetir mientras la opcion sea diferente de 3

Salida:
    Opcion 1: El doble de un numero
    Opcion 2: El triple de un numero
    Opcion 3: mensaje de salida
    Opcion invalida: mensaje de error por opcion invalida

*/

/*
Proceso MenuRepetitivo
    Definir opcion, numero, doblenum, triplenum como Entero

    Hacer 
        Escrbir ""===MENU===""
        Escribir "1. El doble de un numero"
        Escribir "2. El triple de un numero"
        Escribir "3. salir"
        Escribir "Selecione la opcion"
        Leer opcion

        Si opcion == 1 Entonces
            Escribir "Ingrese un numero: "
            Leer numero

            doblenum = 2 * numero

            Escribir "El doble de ", numero, "es: ", doblenum
        Sino
            Si opcion == 2 Entonces
                Escribir "Ingrese un numero: "
                Leer numero

                doblenum = 2 * numero

                Escribir "El triple de ", numero, "es: ", triplenum
            Sino
                Si funcion = 3 Entonces
                    Escribir "Saliendo del programa..."
                Sino
                    Escribir "Error: opcion invalida. Intente nuevamente."
                FinSi   
            FinSi
        Finsi
    Mientras opcion !=3

FinProceso

*/

#include <iostream>
using namespace std;

int main(){
    // Declaramos las variables necesarias
    int opcion, numero, doblenum, triplenum;

    // Usamos do while porque queremos que el menu se muestre al menos una vez
    do
    {
        cout << "\n========== MENU ==========" << endl; // uso el \n para hacer un salto de linea cada vez que muestra el menu
        cout << "1. El doble de un numero" << endl;
        cout << "2. El triple de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecione una opcion: ";
        cin >> opcion;

        // Evaluamos la opcion elegida
        if (opcion == 1)
        {
            // Pedimos al usuario que ingrese un numero
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Realizamos el doble del numero ingresado
            doblenum = 2 * numero;

            // Mostrar el resultado
            cout << "El doble de " << numero << " es: " << doblenum << endl;
        }
        else if (opcion == 2)
        {
            // Pedimos al usuario que ingrese un numero
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Realizamos el triple del numero ingresado
            triplenum = 3 * numero;

            // Mostrar el resultado
            cout << "El trilpe de " << numero << " es: " << triplenum << endl;
        }
        else if (opcion == 3)
        {
            // Mostramos un mensaje de salida
            cout << "Saliendo del programa..." << endl;
        }
        else
        {
            // Si la opcion no esta en el rango valido, mostramos un error
            cout << "Error: opcion invalida. Intente nuevamente" << endl;
        }
        // El menu seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;

}