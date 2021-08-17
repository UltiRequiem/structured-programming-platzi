#include <stdio.h>
#include <stdlib.h>

int main() {
  int caminoElegido;

  printf("Te acabas de levantar y no sabes donde estas, miras a tu arlededor y "
         "ves que solo hay 3 caminos. ¿Cual tomaras?");
  printf("\nEscribe 1 si quieres ir por el camino de Dulces.");
  printf("\nEscribe 2 si quieres ir por el camino de Madera.");
  printf("\nEscribe 3 si quieres ir por el camino de Gatitos.");
  printf("\n\n");

  scanf("%i", &caminoElegido);

  switch (caminoElegido) {
  case 1:
    printf("\nLos dulces se empiezan a derretir y te quedas pegado entre tanto "
           "caramelo. \n");
    break;

  case 2:
    printf("\nLas astillas de madera entran en tus pies y no puedes seguir "
           "caminando! \n");
    break;

  case 3:
    printf("\nLos gatitos lindos te llevan una puerta y al cruzarla te "
           "despiertas! \nFelicidades!");
    break;

  default:
    printf(
        "\nAl no elegir una opcion valida te quedas vagando eternamente. \n");
    break;
  }
}