/**Este Procedimiento Determina Cuantas Veces se Repite una Letra en una Secuencia e Imprime la Letra con mas Repeticiones**/

#include <stdlib.h>

void findLetterWithMaxAppearances()
{
    char cArray[50];
    int iCounterArray[26] = { 0 }, iIndexMax = 0, f;

    printf("Impresion de la Secuencia de Letras. \n");
    for (f = 0; f < 50; f++)
    {
        cArray[f] = 97 + (rand() %  26);
        printf("%c ", cArray[f]);
        iCounterArray[cArray[f] - 97]++;
        if (iCounterArray[cArray[f] - 97] > iCounterArray[iIndexMax])
            iIndexMax = cArray[f] - 97;
    }

    for (f = 0; f < 26; f++)
        printf("\nEl numero de aparaciones de '%c' en la secuencia es %i ", f + 97, iCounterArray[f]);

    printf("\nLa letra con mas apariciones es '%c' con %i repeticiones ", iIndexMax + 97, iCounterArray[iIndexMax]);

    printf("\n \n");
}
