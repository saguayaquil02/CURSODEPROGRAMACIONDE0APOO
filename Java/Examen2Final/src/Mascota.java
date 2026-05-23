/*
Archivo: Mascota.java
Descricion:
Clase padre que presenta una mascota en general
Aqui colocamos lo que todos los animales tienen en comun
*/
public class Mascota {
    // Atributos privados
    private int id;
    private String nombre;
    private int edad;

    // Constructor
    public Mascota(int id, String nombre, int edad){
        this.id = id;
        this.nombre = nombre;
        this.edad = edad;
    }

    // Metodos
    // Mostrar la informacion de la mascota
    public void mostarInfo(){
        System.out.println("ID: " + id);
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad);
    }

    // Metodo de hacerSonido para la mascota que luego sera sobreescrito por las subclases
    public String hacerSonido(){
        return "La mascota hace un sonido"; // Retornamos el valor en String
    }

}
