/*
Titulo: Tarea - Clase 13 Ejercicio1 
Autor: Sebastian Guayaquil
Enunciado: Crea una clase llamada Mascota que represente una mascota sencilla.
La clase debe tener los siguientes atributos:
    • nombre
    • especie
    • edad
*/

public class App {
    public static void main(String[] args) {
        Mascota mascota1 = new Mascota("Jack", "Perro", 2);
        Mascota mascota2 = new Mascota("Pechas", "Gato", 3);

        System.out.println("=== MASCOTA 1 ===");
        mascota1.mostrarInfo();
        System.out.println("\n=== MASCOTA 2 ===");
        mascota2.mostrarInfo();
    }
}