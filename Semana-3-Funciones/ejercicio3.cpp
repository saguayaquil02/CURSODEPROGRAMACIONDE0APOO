/*
Tarea- Clase 8 - Ejercicio 3: Área de un rectángulo

Autor: Sebastian Guayaquil
Fecha: 15 de mayo del 2026

Enunciado: Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.

E/P/S

Entrada:
    2 datos: la base y la altura

Proceso:
    Declarar las variables necesarias
    Leer los datos
    Establecer condicion para establecer que los datos ingresados sean mayores que cero
    calcular el area


Salida:
    Resultado area del rectangulo
*/

/*
PSEUDOCÓDIGO

Algoritmo AreaRectangulo

    Definir base, altura
    Leer base y altura
    condicion para datos positivos
    mostrar resultados

    Funcion leerDatos()
    Funcion calcularArea()
    Funcion mostrarResultados()
FinAlgoritmo

Inicio
    leerDatos...)
    calcualrArea(...)
    mostrarResultados(..)

Fin

*/

#include <iostream>
using namespace std;

// Prototipos de funciones
// Colocamos solo nos nombres y parametros de las funciones que vamos a usar
void leerNumeros(int &base, int altura); // usamos paso por referencia
int calcularArea(int base, int altura);
void mostrarResultados(int area);

int main(){
    
    // Declaramos las variables para resultados
    int base, altura, area;

    //
}


// Funcion para pedir al usuario que ingrese los datos: base y altura
void leerNumeros(int &base, int altura){
    
    // Indicar al usuario que ingrese la base y la altura del rectangulo
    cout << "\n---- Area de un rectangulo -----" << endl;
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese la altura: ";
    cin >> altura;
}

// Funcion para calular el area del rectangulo
int calcularArea(int base, int altura){

    // Calculamos el area del rectangulo
    
}