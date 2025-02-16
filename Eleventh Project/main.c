/**Este Proyecto Concierne las Funciones y sus Usos**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int iValue1, iValue2, iValue3, fAverage;

    printGreetings();

    printf("Ingresa un valor: ");
    scanf("%i", &iValue1);
    printf("Ingresa un valor: ");
    scanf("%i", &iValue2);

    minMaxOf2(iValue1, iValue2);

    printf("El numero mas grande es %i. \n", maxOf3());

    printf("\n \n");

    printf("Ingresa la primer calificacion (valor entero): ");
    scanf("%i", &iValue1);
    printf("Ingresa la segunda calificacion (valor entero): ");
    scanf("%i", &iValue2);
    printf("Ingresa la tercera calificacion (valor entero): ");
    scanf("%i", &iValue3);

    fAverage = calculateAverage(iValue1, iValue2, iValue3);
    printf("El promedio de las 3 calificaciones es: ");

    printf("\n \n");

    return 0;
}
