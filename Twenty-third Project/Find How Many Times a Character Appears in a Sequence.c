/**Este Procedimiento Determina Cuantas Veces Aparece Cada Elemento en una Secuencia e Imprime el Valor con mas Repeticiones**/

#include <stdlib.h>

void findCharacterWithMaxAppearances()
{
    char cArray[70];
    int iCounterArray[53] = { 0 }, iMaxIndex = 0, f, iSumToValidate = 0;

    printf("Impresion de Caracteres de la Secuencia. \n");
    for (f = 0; f < 70; f++)
    {
        do{
            cArray[f] = 32 + (rand() % 91);
        }while (!((cArray[f] >= 97 && cArray[f] <= 122) || (cArray[f] >= 65 && cArray[f] <= 90) || cArray[f] == 32));

        printf("%c ", cArray[f]);
        if (cArray[f] == 32)
        {
            iCounterArray[0]++;
            if (iCounterArray[0] > iCounterArray[iMaxIndex])
                iMaxIndex = 0;
        }
        else if (cArray[f] >= 65 && cArray[f] <= 90)
        {
            iCounterArray[cArray[f] - 64]++;
            if (iCounterArray[cArray[f] - 64] > iCounterArray[iMaxIndex])
                iMaxIndex = cArray[f] - 64;
        }
        else
        {
            iCounterArray[cArray[f] - 70]++;
            if (iCounterArray[cArray[f] - 70] > iCounterArray[iMaxIndex])
                iMaxIndex = cArray[f] - 70;
        }
    }

    for (f = 0; f < 53; f++)
    {
        iSumToValidate = iSumToValidate + iCounterArray[f];
        printf("\nEl numero de apariciones del caracter ");
        if (f == 0)
            printf("'%c' ", 32);
        else if (f <= 26)
            printf("'%c' ", f + 64);
        else
            printf("'%c' ", f + 70);
        printf("en la secuencia es %i ", iCounterArray[f]);
    }

    printf("\nLa letra con mas apariciones en la secuencia es ");
    if (iMaxIndex == 0)
        printf("'%c' ", 32);
    else if (iMaxIndex <= 26)
        printf("'%c' ", iMaxIndex + 64);
    else
        printf("'%c' ", iMaxIndex + 70);
    printf("con %i repeticiones ", iCounterArray[iMaxIndex]);

    printf("\nNumero de valores en la secuencia: %i", iSumToValidate);

    printf("\n \n");
}
