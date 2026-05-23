/*
Archivo: Ave.java
Descripcion:
Clase hija que hereda de Mascota.
Representa a un gato dentro del sistema
*/
public class Ave extends Mascota { // Usamos extends para que sea una subclase que hereda de mascota
    // Constructor 
    public Ave(int id, String nombre, int edad) {
        // Llama al constructor de la clase padre (Mascota)
        super(id, nombre, edad);
    }

    // Sobrescribimos el metodo con override
    @Override
    public String hacerSonido() {
        return "Pio pio"; // Sonido específico del ave
    }
}
