/*
Archivo: Mascota.java
Enunciado: Crea una clase llamada Mascota que represente una mascota sencilla.
La clase debe tener los siguientes atributos:
    • nombre
    • especie
    • edad
Descricion:
Clase padre que presenta una mascota en general
Aqui colocamos lo que todos los animales tienen en comun
*/
public class Mascota {
    // Atributos
    protected String nombre;
    protected String especie;
    protected int edad;

    // Constructor
    public Mascota(String nombre, String especie, int edad){
        this.nombre = nombre;
        this.especie = especie;
        this.edad = edad;
    }

    // Metodos
    // Mostrar la informacion de la mascota
    public void mostrarInfo(){
        System.out.println("Nombre: " + nombre);
        System.out.println("Especie: " + especie);
        System.out.println("Edad: " + edad);
    }
}
