/**Este Procedimiento se Encarga de Encontrar el Valor con Mas Apariciones en una Secuencia Usando un Vector para Contar**/

#include<stdlib.h>

void findNumberWithMaxAppearances()
{
    int iArray[20], iCounterArray[10] = { 0 }, f, iMax = 0;

    printf("Impresion de la Secuencia. \n");
    for (f = 0; f < 20; f++)
    {
        iArray[f] = rand() % 10;
        printf("%i ", iArray[f]);
        iCounterArray[iArray[f]]++;
        if (iCounterArray[iArray[f]] > iCounterArray[iMax])
            iMax = iArray[f];
    }

    for (f = 0; f < 10; f++)
        printf("\nEl numero de '%i's en la secuencia es %i ", f, iCounterArray[f]);

    printf("\nEl numero con mayor apariciones en la secuencia es %i ", iMax);

    printf("\n \n");
}
