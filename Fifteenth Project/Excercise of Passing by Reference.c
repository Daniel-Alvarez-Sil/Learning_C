/**Este Procedimiento Enseña como Modificar una Variable, Mediante el Uso de Punteros, de Manera no Local**/

#include<stdio.h>

void modifyByRef()
{
    int iNumber1, iNumber2, iMax, iMin;
    printf("Ingresa un valor entero: ");
    scanf("%i", &iNumber1);
    fflush(stdin);

    do{
        printf("Ingresa otro valor entero (distinto al anterior): ");
        scanf("%i", &iNumber2);

        if (iNumber2 == iNumber1)
            printf("ERROR: El segundo valor ingresado no puede ser igual al primero. \n");

    }while(iNumber2 == iNumber1);

    assignMinMax(iNumber1, iNumber2, &iMax, &iMin);

    printf("El valor mas grande es %i y el mas chico es %i.", iMax, iMin);

    printf("\n\n");
}
