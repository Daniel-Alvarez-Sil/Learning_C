/**Este Procedimiento Determina si Hay Buenos Vecinos(Elementos que equivalen a la Multiplicación de sus Elementos Adyacentes a la Derecha y a la Izquierda) dentro de un Vector**/

#include<stdio.h>
#define iSIZE1 5


int goodNeighbour()
{
    int iArray[iSIZE1], f;

    for (f = 0; f < iSIZE1; f++)
    {
        printf("Ingresa un valor entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    for (f = 1; f < iSIZE1 - 1; f++)
    {
        if (iArray[f - 1] * iArray[f + 1] == iArray[f])
        {
            printf("La lista de elementos ingresados contiene un buen vecino. \n \n");
            return 0;
        }
    }

    printf("La lista de elementos ingresados no contiene un buen vecino. ");

    printf("\n \n");

    return 0;
}
