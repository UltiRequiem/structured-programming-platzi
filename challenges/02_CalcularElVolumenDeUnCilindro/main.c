#include <stdio.h>
#include <stdlib.h>

void main() {
  float radio, altura;

  printf("Reto 02:Calcular el volumen de un cilindro. \n\n");
  printf("Ingresa el radio de la base: ");
  scanf("%f", &radio);

  printf("Ingresa la altura del cilindro: ");
  scanf("%f", &altura);

  printf("\nEl volumen del cilindro es: %f", (radio * 3.1416) * altura);
}
