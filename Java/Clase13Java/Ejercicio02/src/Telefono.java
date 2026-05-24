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
        if (precio >= 0) {
            this.precio = precio;
        } else {
            this.precio = 0; // colocamos el precio en cero para evitar valores negativos
        }
    }

    // Getters
    // Leer la marca
    public String getMarca() {
        return marca;
    }

    //  Leer el modelo
    public String getModelo() {
        return modelo;
    }

    // leer el precio
    public double getPrecio() {
        return precio;
    }

    // Setters
    // Cambiar marca
    public void setMarca(String marca) {
        this.marca = marca;
    }

    // Cambiar modelo
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    // Validacion
    public void setPrecio(double precio) {
        if (precio >= 0) {
            this.precio = precio; // Si es valido, lo guardamos
        } else {
            // Si es negativo, bloqueamos el cambio y avisamos
            System.out.println("Error: El precio no puede ser negativo");
        }
    }

    // Método para mostrar la informacion
    public void mostrarInfo() {
        System.out.println("=================================");
        System.out.println("      DATOS DEL TELEFONO         ");
        System.out.println("=================================");
        System.out.println("Marca:  " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Precio: $" + precio);
        System.out.println("=================================\n");
    }
}
