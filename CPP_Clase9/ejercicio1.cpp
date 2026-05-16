/*

Autor: Sebastian Guayaquil
Fecha: 16 de mayo del 2026

Bootcamp Programación Cero a POO
Clase 9 - Tarea de depuración
Ejercicio 1: Registro y análisis de 5 notas
Autor: Jhonatan Torres
Fecha: 16/03/2026

ENUNCIADO:
Desarrollar un programa que solicite 5 notas de estudiantes, las guarde en un arreglo
y luego muestre:
1. El promedio general
2. La nota mayor
3. La cantidad de notas aprobadas (mayores o iguales a 14)

El programa entregado contiene errores intencionales.
El estudiante debe corregir el código y verificar su funcionamiento con pruebas.
*/

#include <iostream>
using namespace std;

// Ordenar bien el codigo
// Primero tenemos que tener el prototipo de las funciones

//Prototipo de funciones
// Agregamos una funcion para el ingreso de notas
void ingresarNotas(double notas[], int n);
double calcularPromedio(double notas[], int n);
double encontrarMayor(double notas[], int n);
int contarAprobadas(double notas[], int n);

// Duespues va la funcion int main
int main() {
    // Corregimos la identacion
    // Declaramos las variables necesaarias
    const int N = 5;
    double notas[N];

    cout << "INGRESO DE NOTAS" << endl;
    // Llamada a la funcion para ingresar las notas
    ingresarNotas(notas, N);
    cout << "\nRESULTADOS" << endl;
    cout << "Promedio: " << calcularPromedio(notas, N) << endl;
    cout << "Nota mayor: " << encontrarMayor(notas, N) << endl;
    cout << "Cantidad de aprobadas: " << contarAprobadas(notas, N) << endl;

return 0;
}

// Al final hacemos las funciones que vamos a usar
void ingresarNotas(double notas[], int n){
    // ERROR: recorrido fuera de rango
    for (int i = 0; i < n; i++) { // error corregido i<=N
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];

        // ERROR DE LOGICA:
        // valida mal porque permite mayores a 20 y no controla negativas correctamente
        while (notas[i] < 0 || notas[i] > 20) {
            cout << "Nota invalida. Ingrese nuevamente: ";
            cin >> notas[i];
        }
    }
}


double calcularPromedio(double notas[], int n) {
    // declaramos al variable sumador
    double suma = 0;

    // ERROR: recorrido fuera de rango
    for (int i = 0; i < n; i++) { // Error corregido i<=n
        suma = suma + notas[i];
    }

    // ERROR: puede funcionar mal por el recorrido anterior
    return suma / n;
}

double encontrarMayor(double notas[], int n) {
    // ERROR: iniciar en 0 puede fallar conceptualmente
    double mayor = notas[0]; // Error corregio mayor = 0, ahora la variable mayor se le asigna el valor de la posicion 0 del arreglo

    for (int i = 0; i < n; i++) {
        if (notas[i] > mayor) {
        mayor = notas[i];
        }
    }

    return mayor;
}

int contarAprobadas(double notas[], int n) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
    // ERROR: debería ser >= 14

        if (notas[i] >= 14) { // error corregido: notas[i]>14 
            contador++;
        }
    }

    return contador;
}
