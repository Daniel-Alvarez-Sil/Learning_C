/**Este Procedimiento Determina Cuantas Veces(N) Aparece un Digito (0-9) en un Numero. La Rutina Procede a Determinar si la Cantidad de Apariciones es Par o Impar**/

///Instrucciones
// La funcion regresa 1 si la cantidad de apariciones es par
// La funcion regresa 0 si la cantidad de apariciones es impar

///Ejemplos
// num = 124, digit = 2 --> RETURN 0 (1 aparicion - impar)
// num = 12342, digit = 2 --> RETURN 1 (2 apariciones - par)
// num = 10200240, digit = 0 --> RETURN 1 (4 apariciones - par)

#include<stdio.h>

int calculateIfNumberOfOccurrencesIsEvenOrOdd(int iNumber, int iDigit)
{
    ///Version Original No Optimizada by DAS
    /*if (iNumber < 10)
    {
        if (iNumber == iDigit)
            return 0;
        else return 1;
    }

    if (iNumber % 10 != iDigit)
    {
        if (calculateIfNumberOfOccurrencesIsEvenOrOdd(iNumber / 10, iDigit) == 1)
            return 1;
        else if (calculateIfNumberOfOccurrencesIsEvenOrOdd(iNumber / 10, iDigit) == 0)
            return 0;
    }
    else if (iNumber % 10 == iDigit)
    {
        if (calculateIfNumberOfOccurrencesIsEvenOrOdd(iNumber / 10, iDigit) == 0)
            return 1;
        else if (calculateIfNumberOfOccurrencesIsEvenOrOdd(iNumber / 10, iDigit) == 1)
            return 0;
    }*/

    ///Version Optimizada by DAS
    if (iNumber < 10)
        return iNumber == iDigit ? 0 : 1;
    if (iNumber % 10 != iDigit)
        return calculateIfNumberOfOccurrencesIsEvenOrOdd(iNumber / 10, iDigit);
    else
        return !calculateIfNumberOfOccurrencesIsEvenOrOdd(iNumber / 10, iDigit);
}

void printIfNumberOfOccurrencesIsEvenOrOdd()
{
    int iNumber, iDigit;

    do{
        printf("Ingresa un numero (mayor o igual a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber < 0)
            printf("ERROR: El numero ingresado debe ser mayor o igual a cero. \n");
    }while (iNumber < 0);

    do{
        printf("Ingresa un digito (0-9): ");
        scanf("%i", &iDigit);
        fflush (stdin);

        if (!(iDigit >= 0 && iDigit <= 9))
            printf("ERROR: El numero ingresado debe ser un digito entre 0 y 9. \n");
    }while (!(iDigit >= 0 && iDigit <= 9));

    printf("El numero de apariciones del digito %i en el numero %i es ", iDigit, iNumber);
    if (calculateIfNumberOfOccurrencesIsEvenOrOdd(iNumber, iDigit) == 1)
        printf("par. ");
    else
        printf("impar. ");

    printf("\n \n");
}
