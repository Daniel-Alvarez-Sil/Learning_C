/**Este Procedimiento Cuenta, por Medio de un Vector y sin una Relacion Directa entre Indice y Valor, los Elementos de Otro Vector e Imprime el Elemento con mas Repeticiones**/

#include<stdlib.h>

void findNumberFrom5To10WithMaxAppearances()
{
    int iArray[20], iCounterArray[6] = { 0 }, iIndexMax = 0, f;

    printf("Impresion de la Secuencia de Digitos (5-10). \n");
    for(f = 0; f < 20; f++)
    {
        iArray[f] = 5 + (rand() % 6);
        printf("%i ", iArray[f]);
        iCounterArray[iArray[f] - 5]++;
        if (iCounterArray[iArray[f] - 5] > iCounterArray[iIndexMax])
            iIndexMax = iArray[f] - 5;
    }

    for (f = 0; f < 6; f++)
    {
        printf("\nEl numero de aparaciones en la secuencia de '%i's es %i ", f + 5, iCounterArray[f]);
    }
    printf("\nEl numero con mas aparaciones en la secuencia es %i con %i repeticiones ", iIndexMax + 5, iCounterArray[iIndexMax]);

    printf("\n \n");
}
