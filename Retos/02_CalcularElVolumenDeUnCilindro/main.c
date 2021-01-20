#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio;
    float altura;

    float area;
    float volumen;

    printf("Reto 02:Calcular el volumen de un cilindro. \n\n");
    printf("Ingresa el radio de la base: ");
    scanf("%f", &radio);

    area = radio * 3.1416;

    printf("Ingresa la altura del cilindro: ");
    scanf("%f", &altura);

    volumen = area * altura;

    printf("\nEl volumen del cilindro es: %f", volumen);

    return 0;
}
