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

double calcularPromedio(double notas[], int n) {
double suma = 0;

// ERROR: recorrido fuera de rango

for (int i = 0; i <= n; i++) {
suma = suma + notas[i];
}

// ERROR: puede funcionar mal por el recorrido anterior
return suma / n;
}

double encontrarMayor(double notas[], int n) {
// ERROR: iniciar en 0 puede fallar conceptualmente
double mayor = 0;

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

if (notas[i] > 14) {
contador++;
}
}

return contador;
}

int main() {
const int N = 5;
double notas[N];

cout << "INGRESO DE NOTAS" << endl;

// ERROR: recorrido fuera de rango
for (int i = 0; i <= N; i++) {
cout << "Ingrese la nota " << i + 1 << ": ";
cin >> notas[i];

// ERROR DE LOGICA:
// valida mal porque permite mayores a 20 y no controla negativas correctamente
while (notas[i] < 0 && notas[i] > 20) {
cout << "Nota invalida. Ingrese nuevamente: ";
cin >> notas[i];
}
}

cout << "\nRESULTADOS" << endl
cout << "Promedio: " << calcularPromedio(notas, N) << endl;
cout << "Nota mayor: " << encontrarMayor(notas, N) << endl;
cout << "Cantidad de aprobadas: " << contarAprobadas(notas, N) << endl;

return 0;
}