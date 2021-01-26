#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 1;
    int n;

    printf("Cuantos términos de la sucesión Fibonacci quieres: ");
    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
      printf("%i", a);
      a += b;
      b = a - b;
    }

    return 0;
}