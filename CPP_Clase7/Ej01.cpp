/*
Tarea- Clase 7 - Ejercicio 1: Registro de edades

Autor: Sebastian Guayaquil
Fecha: 11 de mayo del 2026

Enunciado: Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo.
Luego, el programa debe:
    1. mostrar todas las edades registradas junto con su posición
    2. pedir al usuario una edad adicional para buscar dentro del arreglo
    3. indicar si esa edad fue encontrada o no
    4. en caso de encontrarla, mostrar la posición de la primera coincidencia

E/P/S

Entrada:
    8 edades enteras ingresadas por el usuario y almacenadas en un arreglo
    1 edad adicional que se desea buscar dentro del arreglo

Proceso:
    Declarar las variables necesarias
    Declarar un arreglo de tamaño 8
    Leer las 8 edades y almacenarlas en el arreglo
    Mostrar todas las edades registradas junto con su posición
    Solicitar al usuario una edad adicional para buscar
    Recorrer el arreglo comparando cada elemento con la edad ingresada
    Si se encuentra coincidencia:
        Guardar la posición de la primera coincidencia
        Indicar que fue encontrada
    Si no se encuentra:
        Indicar que la edad no está en el arreglo

Salida:
    Lista de las 8 edades con su respectiva posición
    Mensaje indicando si la edad buscada fue encontrada o no
    En caso de encontrarla, mostrar la posición de la primera coincidencia

*/

/*
Proceso RegistroDeEdades

    Definir edades Como Entero
    Dimension edades[8]

    Definir i Como Entero
    Definir buscado Como Entero
    Definir posicion Como Entero
    Definir encontrado Como Logico

    posicion = -1
    encontrado = Falso

    Para i = 0 Hasta 7 Con Paso 1 Hacer
        Escribir "Ingrese la edad ", i + 1, ": "
        Leer edades[i]
    FinPara

    Escribir "Edades registradas:"

    Para i = 0 Hasta 7 Con Paso 1 Hacer
        Escribir "Posicion ", i, ": ", edades[i]
    FinPara

    Escribir "Ingrese la edad que desea buscar: "
    Leer buscado

    Para i = 0 Hasta 7 Con Paso 1 Hacer
        Si edades[i] = buscado Y encontrado = Falso Entonces
            encontrado = Verdadero
            posicion = i
        FinSi
    FinPara

    Si encontrado = Verdadero Entonces
        Escribir "Primera coincidencia de edad encontrada en la posicion: ", posicion
    SiNo
        Escribir "Edad no encontrada en el arreglo."
    FinSi

FinProceso

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 8 enteros para guardar las edades
    int edades[8];

    // Variables que usaremos para recorrer el arreglo
    int i;

    // Variable donde guardaremos la edad que el usuario quiere buscar
    int buscado;

    // Variable para guardar la posicion donde se encontro la edad
    int posicion = -1;

    // Variable de tipo bandera: nos ayuda a saber si encontramos o no la edad
    bool encontrado = false;

    // CARGA DE DATOS

    // Recorremos las 8 posiciones del arreglo
    for (i = 0; i < 8; i++)
    {
        // Pedimos al usuario que ingrese una edad
        cout << "Ingrese la edad " << i + 1 << ": ";

        // Guardamos la edad en la posicion i del arreglo
        cin >> edades[i];
    }

    cout << endl;
    cout << "Edades registradas:" << endl;

    // IMPRESION DE DATOS

    // Volvemos a recorrer el arreglo para mostrar lo que guardamos
    for (i = 0; i < 8; i++)
    {
        // Mostramos la posicion y la edad guardada en esa posicion
        cout << "Posicion " << i << ": " << edades[i] << endl;
    }

    cout << endl;

    // Pedimos la edad que se desea buscar
    cout << "Ingrese la edad que desea buscar: ";
    cin >> buscado;

    // BUSQUEDA SECUENCIAL

    // recorremos el arreglo posicion por posicion
    for (i = 0; i < 8; i++)
    {
        // Comparamos si el valor guardado en la posicion i es igual al numero
        //  que queremos buscar
        if (edades[i] == buscado && encontrado == false)
        {
            encontrado = true;

            // guardamos la posicion donde lo encontramos
            posicion = i;

        }
    }
    cout << endl;

    // RESULTADO FINAL

    if (encontrado == true)
    {
        cout << "Primera coincidencia de edad encontrada en la posicion: " << posicion << endl;
    }
    else
    {
        cout << " Edad no encontrada en el arreglo." << endl;
    }

    return 0;
}