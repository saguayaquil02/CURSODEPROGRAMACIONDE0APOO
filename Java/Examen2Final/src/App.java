/*
Examen 2 Final
Autor: Sebastian Guayaquil
Fecha: 23 de mayo del 2026

Enunciado: Sistema de gestión de mascotas
Se desea desarrollar una aplicación en consola que permita gestionar diferentes
tipos de mascotas.
El sistema debe permitir:
    crear mascotas, 
    almacenarlas en una lista, 
    mostrarlas 
    ejecutar acciones propias de cada tipo de mascota.
Todas las mascotas comparten características generales, pero cada tipo tiene un
comportamiento diferente.

*/

import java.util.ArrayList; // importamos la libreria para poder almacenar las mascotas
import java.util.Scanner; // Esta es la encargada de leer la entrada de datos por consola
import java.util.InputMismatchException; // excepcion especifica cuando el usuario ingresa un tipo de dato que no coincide con el esperado
public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Lista de tipo Mascota
        ArrayList<Mascota> listaMascotas = new ArrayList<>();
        int opcion = 0; // variable para opcion y controlar el menu

        System.out.println("\n=== SISTEMA DE GESTION DE MASCOTAS ===");
        System.out.println("1. Registrar mascota");
        System.out.println("2. Mostrar mascotas");
        System.out.println("3. Ejecutar sonido de una mascota (por ID)");
        System.out.println("4. Buscar mascota por nombre");
        System.out.println("5. Salir");
        System.out.print("Seleccione una opción: ");

        // Manejo de errores
        try {
                // nextInt espera un número de forma estricta. Si el usuario escribe una letra, el Scanner se bloquea y lanza una excepción
                opcion = scanner.nextInt();
                // nextLine limpiar salto de línea restante para que el buffer quede vacío
                scanner.nextLine(); 

                switch (opcion) {
                    case 1:
                        System.out.println("\n-- Registrar Mascota --");
                        System.out.println("Tipo: 1. Perro | 2. Gato | 3. Ave"); 
                        System.out.print("Elija el tipo: ");
                        int tipo = scanner.nextInt();
                        scanner.nextLine();

                        // condicion para validar el numero ingresado
                        if (tipo != 1 && tipo != 2 && tipo != 3) {
                            System.out.println("Tipo de mascota inválido. Registro cancelado.");
                            break;
                        }

                        System.out.println("Ingrese ID: ");
                        int id = scanner.nextInt();
                        scanner.nextLine();

                        System.out.println("Ingrese Nombre: ");
                        String nombre = scanner.nextLine();

                        System.out.print("Ingrese Edad: ");
                        int edad = scanner.nextInt();
                        scanner.nextLine();
    }
}
