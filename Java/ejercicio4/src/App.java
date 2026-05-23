/*
Ejercicio 4 
Autor: Sebastian Guayaquil
Fecha: 21 de mayo del 2026

Enunciado: Desarrollar un programa en Java que permita representar animales dentro de un refugio
El sistema debe contar con:
    una clase base llamada Animal
    dos subclases llamadas Perro y Gato
    un metodo llamado hacerSonido() que se conporte de manera distinta en cada subclase
    una coleccccion que almacene varios animales
    recorrido que muestre la informacion y sonido de cada animal 
*/

//
import java.util.ArrayList;

public class App {
    public static void main(String[] args){
        // Creamos una lista de tipo Animal
        // Esto es importante porque aqui podremos guardar objetos perro y gato
        ArrayList<Animal> animales = new ArrayList<>();

        // Agregamos objetos de dsitintas subclases
        animales.add(new Perro("Firulais", 3));
        animales.add(new Gato("Pechas", 5));
        animales.add(new Perro("Jack", 1));

        // Recorremos la lista
        for(Animal animal: animales){
            animal.mostarInfo();
            animal.hacerSonido();
            System.out.println("-----------------");
        }
    }
}
