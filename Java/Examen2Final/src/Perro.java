/*
Archivo: Perro.java
Descripcion:
Clase hija que hereda de Mascota.
Representa a un perro dentro del sistema
*/

public class Perro extends Mascota { // Usamos extends para que sea una subclase que hereda de mascota
    // Constructor 
    public Perro(int id, String nombre, int edad) {
        // Llama al constructor de la clase padre (Mascota)
        super(id, nombre, edad);
    }

    // Sobrescribimos el metodo con override
    @Override
    public String hacerSonido() {
        return "Guau guau"; // Sonido específico del perro
    }

}
