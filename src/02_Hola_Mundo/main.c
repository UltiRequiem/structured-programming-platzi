// Standard input-output header
#include <stdio.h>

// Main es el punto de entrada de los programas
// Todos los compiladores comprenden que sea de tipo int, algunos aceptan void.

int sum(int num1, int num2) {
    return (num1 + num2) * 5;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

void main() {
    int value = multiply(sum(3, 4), 5);
    //print formatted, muestra cadenas con formato.
    printf("Hola mundo\n");

    //Se regresa cero para indicar que se termino la funcion sin errores.
}
