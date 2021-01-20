
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheitTemp;
    float celsiusTemp;

    printf("Ret 03: Transformador de Grados Fahrenheit a Celsius \n\n");
    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheitTemp);

    celsiusTemp = ((fahrenheitTemp - 32) *5)/9;

    printf("\nLa temperatura en grados Celsius es: %f \n\n", celsiusTemp);

    return 0;
}
