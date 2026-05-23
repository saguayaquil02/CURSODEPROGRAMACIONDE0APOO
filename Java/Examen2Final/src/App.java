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

        do {
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
                            System.out.println("Tipo de mascota invalido. Registro cancelado.");
                            break;
                        }

                        // El usuario va poder ingresar un ID para identificar a cada mascota
                        System.out.println("Ingrese ID: ");
                        int id = scanner.nextInt();
                        scanner.nextLine();

                        System.out.println("Ingrese Nombre: ");
                        String nombre = scanner.nextLine();

                        System.out.println("Ingrese Edad: ");
                        int edad = scanner.nextInt();
                        scanner.nextLine();

                        // Validaciones (ID > 0, edad > 0 y nombre no vacío) antes del registro.
                        if (id <= 0) {
                            // .trim() toma una cadena de texto y elimina todos los espacios en blanco que estén al principio y al final
                            System.out.println("Error: El ID debe ser mayor a 0");
                            // .isEmpty() Está vacío? revisa si la cadena de texto no tiene ningún carácter
                        } else if (nombre.trim().isEmpty()) {
                            System.out.println("Error: El nombre no puede estar vacio");
                        } else if (edad <= 0) {
                            System.out.println("Error: La edad debe ser mayor a 0");
                        } else {
                    
                            if (tipo == 1) {
                                listaMascotas.add(new Perro(id, nombre, edad));
                                System.out.println("Perro registrado con exito");
                            } else if (tipo == 2) {
                                listaMascotas.add(new Gato(id, nombre, edad));
                                System.out.println("Gato registrado con exito");
                            } else if (tipo == 3) {
                                listaMascotas.add(new Ave(id, nombre, edad));
                                System.out.println("Ave registrada con exito");
                            }
                        }
                        break;

                        case 2:
                        System.out.println("\n-- Lista de Mascotas --");
                        if (listaMascotas.isEmpty()) {
                            System.out.println("La lista esta vacia");
                        } else {
                            // ciclo for para recorrer la lista
                            for (Mascota m : listaMascotas) {
                                System.out.println("-------------------------");
                                m.mostrarInfo();
                                System.out.println("Tipo: " + m.getClass().getSimpleName()); 
                                System.out.println("Sonido: " + m.hacerSonido()); 
                            }
                        }
                        break;

                    case 3:
                        
                        System.out.println("\n-- Ejecutar Sonido por ID --");
                        System.out.println("Ingrese el ID de la mascota: ");
                        int idBuscar = scanner.nextInt();
                        scanner.nextLine();
                        boolean encontradaId = false; // booleano False

                        for (Mascota m : listaMascotas) {
                            if (m.getId() == idBuscar) {
                                // Al llamar a hacerSonido(), cada objeto responde segun su tipo
                                System.out.println(m.getNombre() + " dice: " + m.hacerSonido());
                                encontradaId = true; // aqui encotrado se hace TRUE
                                break; 
                            }
                        }

                        if (!encontradaId) { // aqui encotrado compara si no es True
                            System.out.println("Mascota no encontrada");
                        }
                        break;

                    case 4:
                        System.out.println("\n-- Buscar Mascota por Nombre --");
                        System.out.println("Ingrese el nombre exacto de la mascota: ");
                        String nombreBuscar = scanner.nextLine();
                        boolean encontradaNombre = false;

                        for (Mascota m : listaMascotas) {
                            // .equalsIgnoreCase() ignora mayusculas y minusculas para facilitar la busqueda al usuario.
                            if (m.getNombre().equalsIgnoreCase(nombreBuscar)) {
                                System.out.println("Mascota encontrada");
                                m.mostrarInfo();
                                encontradaNombre = true;
                                break;
                            }
                        }

                        if (!encontradaNombre) {
                            System.out.println("Mascota no encontrada");
                        }
                        break;

                    case 5:
                        System.out.println("Saliendo del sistema...");
                        break;

                    default:
                        // Si el usuario no ingresa una opcion valida
                        System.out.println("Opcion no valida. Intente de nuevo");
                }
            // Captura entradas invalidas letras en campos numericos
            } catch (InputMismatchException e) {
                System.out.println("Error: Debe ingresar un valor numerico valido");
                scanner.nextLine(); 
            }
        // El bucle no termina al menos que se elija la opcion 5
        } while (opcion != 5);

        scanner.close(); // esto cierra el scanner
    }
}

    
