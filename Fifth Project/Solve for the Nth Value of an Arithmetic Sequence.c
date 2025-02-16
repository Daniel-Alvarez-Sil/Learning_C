#include<stdio.h>

int arithmeticSeqAn()
{
    //Definimos variables
    float fA1 = 1, fD = 0;
    int in = 0;

    //Solicitamos la diferencia de la secuencia aritmetica
    printf("Ingresa la diferencia entre los valores de una secuencia aritmetica: ");
    scanf("%f", &fD);

    //Valores Iniciales
    printf("\n a = 1 \t d = %0.2f \n  1 \n \n", fD);

    //Solicitamos el valor n para poder calcular el valor de An en la secuencia aritmetica
    printf("Ingresa el orden del numero a calcular de la secuncia aritmetica \n \t n: ");
    scanf("%i", &in);
    fflush(stdin);

    //Valores Finales
    printf("\n Valores finales: \n \t a = 1 \t d = %0.2f \t a = %0.2f \n \t  1    \t          \t  %i", fD, fA1 + (in - 1) * fD, in);
    return 0;

}
