#include <stdio.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 789 + 987;
    rRes = 7877.5878996 - 799.5578;
    rDiv = 7.5844336 / 799557788;
    rMult = 7.584446 * 7944478;
    rMod = 7%3;

    printf("Resultado de la suma: %i \n" ,rSum);
    printf("Resultado de la resta: %f \n" ,rRes);
    printf("Resultado de la division: %f \n" ,rDiv);
    printf("Resultado de la multiplicacion: %f \n" ,rMult);
    printf("Resultado del modulo: %i \n" ,rMod);


    return 0;
}
