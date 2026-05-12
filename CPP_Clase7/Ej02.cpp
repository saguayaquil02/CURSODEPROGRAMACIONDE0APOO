/*
Tarea- Clase 7 - Ejercicio 2: Registro de cantidades vendidas

Autor: Sebastian Guayaquil
Fecha: 11 de mayo del 2026

Enunciado: Desarrolle un programa en C++ que permita ingresar 6 cantidades enteras de productos vendidos durante el día en un arreglo.
Luego, el programa debe:
    1. mostrar todas las cantidades ingresadas
    2. pedir al usuario una cantidad específica para buscar
    3. indicar si esa cantidad se encuentra dentro del arreglo
    4. mostrar la posición donde aparece por primera vez, o un mensaje indicando
    que no fue encontrada

E/P/S

Entrada:
    6 cantidades enteras de productos vendidos durante el día (almacenadas en un arreglo).
    1 cantidad adicional ingresada por el usuario para buscar dentro del arreglo.

Proceso:
    Declarar las variables necesarias
    Declarar un arreglo de tamaño 6.
    Leer las 6 cantidades y almacenarlas en el arreglo.
    Mostrar todas las cantidades ingresadas.
    Solicitar al usuario una cantidad específica para buscar.
    Recorrer el arreglo comparando cada elemento con la cantidad ingresada.
    Si se encuentra coincidencia:
        Guardar la posición de la primera aparición.
        Indicar que fue encontrada.
    Si no se encuentra:
        Mostrar un mensaje indicando que no fue encontrada.


Salida:
    Lista de las 6 cantidades ingresadas.
    Mensaje indicando si la cantidad buscada se encuentra o no en el arreglo.
    En caso de encontrarla, mostrar la posición de la primera aparición.
*/

/*
Proceso RegistroCantidadesVendidas

    Definir cantidades Como Entero
    Dimension cantidades[6]

    Definir i Como Entero
    Definir buscado Como Entero
    Definir posicion Como Entero
    Definir encontrado Como Logico

    posicion = -1
    encontrado = Falso

    Para i = 0 Hasta 5 Con Paso 1 Hacer
        Escribir "Ingrese la cantidad vendida ", i + 1, ": "
        Leer cantidades[i]
    FinPara

    Escribir "Cantidades de productos vendidos:"

    Para i = 0 Hasta 5 Con Paso 1 Hacer
        Escribir "Cantidades: ", cantidades[i]
    FinPara

    Escribir "Ingrese la cantidad especifica que desea buscar: "
    Leer buscado

    Para i = 0 Hasta 5 Con Paso 1 Hacer
        Si cantidades[i] = buscado Y encontrado = Falso Entonces
            encontrado = Verdadero
            posicion = i
        FinSi
    FinPara

    Escribir ""

    Si encontrado = Verdadero Entonces
        Escribir "La cantidad especificada si se encuentra en el arreglo"
        Escribir "Primera coincidencia encontrada en la posicion: ", posicion
    SiNo
        Escribir "Cantidad no encontrada en el arreglo."
    FinSi

FinProceso

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 6 enteros para guardar las cantidades de productos vendidos
    int cantidades[6];

    // Variables que usaremos para recorrer el arreglo
    int i;

    // Variable donde guardaremos la cantidad que el usuario quiere buscar
    int buscado;

    // Variable para guardar la posicion donde se encontro la cantidad del producto vendido
    int posicion = -1;

    // Variable de tipo bandera: nos ayuda a saber si encontramos o no la cantidad buscada
    bool encontrado = false;

    // CARGA DE DATOS

    // Recorremos las 6 posiciones del arreglo
    for (i = 0; i < 6; i++)
    {
        // Pedimos al usuario que ingrese una cantidad de producto vendido
        cout << "Ingrese la cantidad vendida " << i + 1 << ": ";

        // Guardamos la cantidad en la posicion i del arreglo
        cin >> cantidades[i];
    }

    cout << endl;
    cout << "Cantidades de productos vendidos:" << endl;

    // IMPRESION DE DATOS

    // Volvemos a recorrer el arreglo para mostrar lo que guardamos
    for (i = 0; i < 6; i++)
    {
        // Mostramos todas las cantidades ingresadas
        cout << "Cantidades: " << cantidades[i] << endl;
    }

    cout << endl;

    // Pedimos la cantidad especifica que se desea buscar
    cout << "Ingrese la cantidad especifica que desea buscar: ";
    cin >> buscado;

    // BUSQUEDA SECUENCIAL

    // recorremos el arreglo posicion por posicion
    for (i = 0; i < 6; i++)
    {
        // Comparamos si el valor guardado en la posicion i es igual al numero
        //  que queremos buscar
        if (cantidades[i] == buscado && encontrado == false)
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
        cout << "La cantidad especificada si se encuentra en el arreglo" << endl;
        cout << "Primera coincidencia encontrada en la posicion: " << posicion << endl;
    }
    else
    {
        cout << " Cantidad no encontrada en el arreglo." << endl;
    }

    return 0;
}