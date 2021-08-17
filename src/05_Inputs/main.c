#include <stdio.h>

int main() {
  printf("Entrada de datos Parte 2\n\n");

  int enteroA;
  float flotanteA;
  char caracterA;

  printf("Ingresa el valor de enteroA es: ");
  scanf("%i", &enteroA);

  printf("Ingresa el valor de flotanteA es: ");
  scanf("%f", &flotanteA);

  printf("Ingresa el valor de caracterA es: ");
  scanf(" %c", &caracterA);

  printf("\n\n");
  printf("enteroA: %d\n", enteroA);
  printf("flotanteA: %f\n", flotanteA);
  printf("caracterA: %c\n", caracterA);

  return 0;
}
