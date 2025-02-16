/**Este Procedimiento Determina Cuantas Veces se Repiten los Elementos (Letras Minusculas) de una Secuencia e Imprime el Elemento con Mayor Repeticiones**/

#include<stdlib.h>

void findCapitalLetterWithMaxAppearances()
{
    char cArray[50];
    int iCounterArray[26] = { 0 }, iMaxIndex = 0, f;

    printf("Impresion de la Secuencia de Letras Mayusculas. \n");
    for (f = 0; f < 50; f++)
    {
        cArray[f] = 65 + (rand() % 26);
        printf("%c ", cArray[f]);
        iCounterArray[cArray[f] - 65]++;
        if (iCounterArray[cArray[f] - 65] > iCounterArray[iMaxIndex])
            iMaxIndex = cArray[f] - 65;
    }

    for (f = 0; f < 26; f++)
        printf("\nEl numero de apariciones de la letra '%c' es %i ", f + 65, iCounterArray[f]);

    printf("\nLa letra con mas apariciones '%c' con %i repeticiones ", iMaxIndex + 65, iCounterArray[iMaxIndex]);

    printf("\n \n");
}
