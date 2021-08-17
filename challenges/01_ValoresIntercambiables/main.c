#include <stdio.h>
#include <stdlib.h>

int main() {
  int X;
  int Y;
  int intercambiador;

  printf("(Solo Ingresar numeros Porfavor) \n");
  printf("Da el valor de x: ");
  scanf("%i: ", &X);

  printf("Da el valor de y: ");
  scanf("%i: ", &Y);

  intercambiador = X;
  X = Y;
  Y = intercambiador;

  printf("\nAhora X vale: %i \n", X);
  printf("Ahora Y vale: %i \n\n", Y);
  // XD
  printf("Salu2 \n");

  return 0;
}
