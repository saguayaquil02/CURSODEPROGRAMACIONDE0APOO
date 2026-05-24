/*
Titulo: Tarea - Clase 13 Ejercicio2 
Autor: Sebastian Guayaquil
Enunciado: Crea una clase llamada Telefono que represente un teléfono.
La clase debe tener los siguientes atributos privados:
    • marca
    • modelo
    • precio
*/
public class App {
    public static void main(String[] args) {
        
        // Crear un objeto de tipo Telefono
        Telefono celular1 = new Telefono("Samsung", "A55", 250.0);

        // Mostrar la información inicial
        System.out.println("--- ESTADO INICIAL ---");
        celular1.mostrarInfo();

        System.out.println("--- APLICANDO DESCUENTO (CAMBIO VALIDO) ---");
        celular1.setModelo("A55 (Edicion Especial)");
        celular1.setPrecio(199.99); // Valor positivo
        celular1.mostrarInfo();

        // Probar un cambio de precio invalido
        System.out.println("--- ERROR (CAMBIO INVALIDO) ---");
        celular1.setPrecio(-50.0); // Valor negativo que debe ser bloqueado
        
        // Volver a mostrar para confirmar que el precio no cambió y sigue en 199.99
        System.out.println("\n--- ESTADO FINAL DESPUES DEL ERROR ---");
        celular1.mostrarInfo();
    }
}