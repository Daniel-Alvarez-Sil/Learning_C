/**Este Procedimiento Determina si una Palabra es un Palindromo o No**/

#include<string.h>

int calculatePalindromeOrNot(char *cWord)
{
    int iLetters = calculateLength(cWord), f, lPalindrome = 1;
    //printf("Numero de caracteres: %i\n", iLetters);
    for (f = 0; f < iLetters / 2 ; f++)
    {
        if (cWord[f] != cWord[iLetters - f - 1])
        {
            lPalindrome = 0;
            break;
        }
    }
    return lPalindrome;
}

void printPalindromeOrNot()
{
    char cWord[16];
    printf("Ingresa una palabra (maximo 15 caracteres): ");
    scanf("%15s", &cWord);

    printf("La palabra '%s' ", cWord);
    if (calculatePalindromeOrNot(cWord) == 1)
        printf("si ");
    else
        printf("no ");
    printf("es un palindromo. ");

    printf("\n \n");
}
