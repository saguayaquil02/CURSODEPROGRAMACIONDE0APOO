# Ejercicio 2: Clase 13 - Teléfono (POO en Java)

Este programa desarrollado en **Java** sirve para poner en práctica los pilares fundamentales de la **Programación Orientada a Objetos (POO)**, con un enfoque principal en el encapsulamiento y la validación de datos dentro de una clase.

## Objetivos Evaluados

* **Encapsulamiento:** Uso de modificadores de acceso privados (`private`) para proteger los atributos de la clase.
* **Métodos de Acceso:** Implementación de `getters` y `setters` para la consulta y modificación segura de los datos.
* **Validación de Datos:** Restricción lógica en el método `setPrecio` para evitar el ingreso de valores negativos.
* **Instanciación y Uso:** Creación e interacción con objetos desde la clase principal (`App`).

## Estructura del programa

El programa consta de dos clases principales:

1. **`Telefono.java`:** Contiene el molde del objeto con sus atributos privados (`marca`, `modelo`, `precio`), el constructor, los métodos de acceso y el método `mostrarInfo()` para imprimir el estado del objeto.
2. **`App.java`:** Contiene la clase principal con el método `main`, donde se crea un teléfono de prueba, se manipulan sus datos y se comprueba el correcto funcionamiento de las validaciones ante cambios de valores válidos e inválidos.

## Autor
Programa desarrollado por Sebastian Guayaquil