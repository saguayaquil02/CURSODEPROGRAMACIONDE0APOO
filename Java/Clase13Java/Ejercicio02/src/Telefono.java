/*
Archivo: Telefono.java
Enunciado: Crea una clase llamada Telefono que represente un teléfono.
La clase debe tener los siguientes atributos privados:
Descricion:
Clase padre que presenta el telefono en general
Aqui colocamos lo que todos los atributos que tiene el telefono en general
*/
public class Telefono {
    // Atributos privados
    private String marca;
    private String modelo;
    private double precio;

    // Constructor
    public Telefono(String marca, String modelo, double precio) {
        // Inicializamos los datos
        this.marca = marca;
        this.modelo = modelo;
    }
