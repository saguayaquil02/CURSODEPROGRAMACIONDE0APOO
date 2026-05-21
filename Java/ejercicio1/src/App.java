/*
Título: Ejercicio1 - Clase, objeto y atributo
Autor: Sebastian Guayaquil
Enunciado: Crear una clase llamada 
*/
public class App {
    public static void main(String[] args){
        Estudiante estudiante1 = new Estudiante(); // Aqiu creamos nuestro primer objeto de la clase estudiante

        estudiante1.nombre = "Ana";
        estudiante1.edad = 22;
        estudiante1.carrera = "Inicial";

        Estudiante estudiante2 = new Estudiante(); // Aqui creamos el segundo objeto de 

        estudiante2.nombre = "Christian";
        estudiante2.edad = 23;
        estudiante2.carrera = "Electronica";

        System.out.println("== Estudiante 1 ==");
        System.out.println("Nombre: " + estudiante1.nombre);
        System.out.println("Edad: " + estudiante1.edad);
        System.out.println("Carrera: " + estudiante1.carrera);
        
        System.out.println("== Estudiante 2 ==");
        System.out.println("Nombre: " + estudiante2.nombre);
        System.out.println("Edad: " + estudiante2.edad);
        System.out.println("Carrera: " + estudiante2.carrera);
    }
}
