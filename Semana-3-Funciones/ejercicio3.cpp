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
void leerDatos(double &base, double &altura); // usamos paso por referencia
double calcularArea(double base, double altura);
void mostrarResultados(double area);

int main(){
    
    // Declaramos las variables para resultados
    double base, altura, area;

    // Llamamos a la funcion para leer los datos: base y altura
    leerDatos(base,altura);

    // Llamamos a la funcion para calular el area del rectangulo
    calcularArea(base, altura);

    // Llamamos a la funcion para mostar los resultados
}


// Funcion para pedir al usuario que ingrese los datos: base y altura
void leerDatos(double &base, double &altura){
    
    // Indicar al usuario que ingrese la base y la altura del rectangulo
    cout << "\n---- Area de un rectangulo -----" << endl;

    // Bucle while por si el usuario ingresa valores negativos 
    while (base < 0 || altura < 0)
    {
        cout << "Error: los datos deben ser numeros positivos" << endl;
        cout << "Ingrese la base: ";
        cin >> base;
        cout << "Ingrese la altura: ";
        cin >> altura;
    }
    
}

// Funcion para calular el area del rectangulo
double calcularArea(double base, double altura){

    // Calculamos el area del rectangulo
    return base * altura;
}

// Funcion para mostrar los resultados obtenidos
void mostrarResultados(double area){
    cout << "\nLa area del rectangulo es: " << area << endl;
}
