/*
Título plantilla B - creacion de objetos 
Autor: Sebastian Guayaquil
Enunciado: Crear un objeto de tipo Persona, asignar valores a sus atributos y mostrar su informacion a clase
*/
public class App {
    public static void main(String[] args) throws Exception { // Método principal
        Persona persona1 = new Persona(); // Aqui creamos un objeto de tipo llamado persona1

        persona1.nombre = "Carlos"; // Asignamos un valor al atributo nombre del objeto
        persona1.edad = 21; // Asignamos un vlaor al atributo edad del objeto

        System.out.println("Nombre: " + persona1.nombre); // Mostramos el nombre en consola
        System.out.println("Edad: " + persona1.edad); // Mostramos la edad en consola   
    }
}
