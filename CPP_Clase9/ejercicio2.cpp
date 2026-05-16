/* 
Autor: Sebastian Guayaquil
Fecha: 16 de mayo del 2026

Bootcamp Programación Cero a POO 
Clase 9 - Tarea de depuración 
Ejercicio 2: Menú de operaciones con funciones 
Autor: Jhonatan Torres 
Fecha: 16/03/2026 
ENUNCIADO: 
Desarrollar un programa que muestre un menú con las siguientes opciones: 
    1. Sumar dos números 
    2. Restar dos números 
    3. Multiplicar dos números 
    4. Dividir dos números 
    5. Salir 
El programa debe usar funciones para cada operación. 
El código entregado contiene errores intencionales. 
El estudiante debe corregirlo y probar cada opción del menú. 
*/ 
#include <iostream> 
using namespace std; 
double sumar(double a, double b) { 
return a + b; 
} 
double restar(double a, double b) { 
return a - b; 
} 
double multiplicar(double a, double b) { 
return a * b; 
} 
double dividir(double a, double b) { 
// ERROR: no valida division para cero 
return a / b; 
} 
int main() { 
    int opcion; 
    double n1, n2; 
    char continuar = 's'; 
 
    while (continuar == 's') { 
        cout << "\nMENU DE OPERACIONES" << endl; 
        cout << "1. Sumar" << endl; 
        cout << "2. Restar" << endl; 
        cout << "3. Multiplicar" << endl; 
        cout << "4. Dividir" << endl; 
        cout << "5. Salir" << endl; 
 
        cout << "Ingrese una opcion: "; 
        cin >> opcion; 
 
        // ERROR DE LOGICA: 
        // pide números incluso si elige salir 
        cout << "Ingrese el primer numero: "; 
        cin >> n1; 
        cout << "Ingrese el segundo numero: "; 
        cin >> n2; 
 
        // ERRORES: uso incorrecto de '=' en condiciones 
        if (opcion = 1) { 
            cout << "Resultado: " << sumar(n1, n2) << endl; 
        } 
        else if (opcion = 2) { 
            cout << "Resultado: " << restar(n1, n2) << endl; 
        } 
        else if (opcion = 3) { 
            cout << "Resultado: " << multiplicar(n1, n2) << endl; 
        } 
        else if (opcion = 4) { 
            cout << "Resultado: " << dividir(n1, n2) << endl; 
        } 
        else if (opcion == 5) { 
            cout << "Saliendo del programa..." << endl; 
            continuar == 'n'; 
        } 
        else { 
            cout << "Opcion invalida." << endl; 
        } 
 
        if (opcion != 5) { 
            cout << "Desea continuar? (s/n): "; 
            cin >> continuar; 
        } 
    } 
 
    return 0; 
}