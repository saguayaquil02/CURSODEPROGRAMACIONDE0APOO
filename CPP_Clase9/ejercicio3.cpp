/* 
Autor: Sebastian Guayaquil
Fecha: 16 de mayo del 2026

Bootcamp Programación Cero a POO 
Clase 9 - Tarea de depuración 
Ejercicio 3: Análisis de números enteros 
Autor: Jhonatan Torres 
Fecha: 16/03/2026 
ENUNCIADO: 
Desarrollar un programa que solicite 6 números enteros y luego muestre: 
1. La suma de todos los números 
2. El número mayor 
3. El número menor 
4. La cantidad de números pares 
5. La cantidad de números negativos 
El programa utiliza funciones y arreglos, pero contiene errores intencionales. 
El estudiante debe corregirlo completamente y comprobar su funcionamiento. 
*/ 

#include <iostream> 
using namespace std; 

// Primero hacemos los prototipos de las funciones
int calcularSuma(int numeros[], int n);
int encontrarMayor(int numeros[], int n);
int encontrarMenor(int numeros[], int n);
int contarPares(int numeros[], int n);
int contarNegativos(int numeros[], int n);

// Luego hacemos la funcion int main

int main() { 
    const int N = 6; 
    int numeros[N]; 
 
    cout << "Ingrese 6 numeros enteros:" << endl; 
 
    // ERROR: recorrido fuera de rango 
    for (int i = 0; i < N; i++) { // corregido: i<=N
        cout << "Numero " << i + 1 << ": "; 
        cin >> numeros[i]; 
    } 
 
    cout << "\nRESULTADOS" << endl; 
    cout << "Suma total: " << calcularSuma(numeros, N) << endl; 
    cout << "Numero mayor: " << encontrarMayor(numeros, N) << endl; 
    cout << "Numero menor: " << encontrarMenor(numeros, N) << endl; 
    cout << "Cantidad de pares: " << contarPares(numeros, N) << endl; 
    cout << "Cantidad de negativos: " << contarNegativos(numeros, N) << endl; 
    return 0; //Error corregido, ;
}

// Al final hacemos las funciones que vamos a utilizar
// Corregimos la identacion del codigo
int calcularSuma(int numeros[], int n) { 
    int suma = 0; 
    for (int i = 0; i < n; i++) { 
        suma = suma + numeros[i]; 
    } 
    return suma; 
} 

int encontrarMayor(int numeros[], int n) { 
    // ERROR: iniciar en 0 da problemas si todos son negativos 
    int mayor = numeros[0]; // error corregido: mayor = 0 
    for (int i = 0; i < n; i++) { 
        if (numeros[i] > mayor) { 
            mayor = numeros[i]; 
        } 
    } 
    return mayor; 
} 

int encontrarMenor(int numeros[], int n) { 
// ERROR: iniciar en 0 da problemas si todos son positivos 
int menor = numeros[0]; // error corregido: menor = 0;
for (int i = 0; i < n; i++) { 
        if (numeros[i] < menor) { 
            menor = numeros[i]; 
        } 
    } 
 
    return menor; 
} 
 
int contarPares(int numeros[], int n) { 
    int contador = 0; 
 
    for (int i = 0; i < n; i++) { 
        // ERROR: cuenta impares 
        if (numeros[i] % 2 == 0) { // error corregido: %2 !=0
            contador++; 
        } 
    } 
 
    return contador; 
} 
 
int contarNegativos(int numeros[], int n) { 
    int contador = 0; 
 
    // ERROR: recorrido fuera de rango 
    for (int i = 0; i < n; i++) { // error corregido: i<=n 
        if (numeros[i] < 0) { 
            contador++; 
        } 
    } 
 
    return contador; 
} 