/**Este Procedimiento Determina si los Digitos de un Numero Corresponden, en Terminos de Par o Impar, a su Respectiva Posicion**/

///Examples
// Example #1
// N = 1234
// Position '0' : 4 --> EVEN & EVEN
// Position '1' : 3 --> ODD & ODD
// Position '2' : 2 --> EVEN & EVEN
// Position '3' : 1 --> ODD & ODD
// RETURN 1 (Todos los Digitos y las Posiciones Corresponden)
//
// Example #2
// N = 56578
// Position '0' : 8 --> EVEN & EVEN
// Position '1' : 7 --> ODD & ODD
// Position '2' : 5 --> EVEN & ODD  <--
// Position '3' : 6 --> ODD & EVEN  <--
// Position '4' : 5 --> EVEN & ODD  <--
// RETURN 0 (No Todos los Digitos y las Posiciones Corresponden)

#include<stdio.h>

int calculateDigitAndPositionCorrespondOrNot(int iDigit, int iPosition)
{
    /// Version ORIGINAL by DAS
    /*int iAuxiliar;

    if (iDigit < 10)
    {
        //if (iPosition == -1)
        //    iPosition = 0;
        iPosition = iPosition + 1;

        printf("\t\nPosition '%i' : %i", iPosition, iDigit);

        if (iDigit % 2 == iPosition % 2)
            return 1;
        else
            return 0;
    }

    iAuxiliar = calculateDigitAndPositionCorrespondOrNot(iDigit % 10, iPosition);

    if(iAuxiliar == 1)
        return calculateDigitAndPositionCorrespondOrNot(iDigit / 10, iPosition + 1);
    else
        return 0; */


    /// Version Optimizada by DAS

    if (iDigit < 10)
    {
        iPosition = iPosition + 1;
        return iDigit % 2 == iPosition % 2 ? 1 : 0;
    }
    if(calculateDigitAndPositionCorrespondOrNot(iDigit % 10, iPosition) == 1)
        return calculateDigitAndPositionCorrespondOrNot(iDigit / 10, iPosition + 1);
    else
        return 0;


}

void printDigitAndPositionCorrespondOrNot()
{
    int iNumber;
    do{
        printf("Ingresa un numero entero (mayor a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber <= 0)
            printf("ERROR: El numero ingresado debe ser mayor a cero. \n");
    } while (iNumber <= 0);

    printf("Los digitos y las posiciones ");
    if (calculateDigitAndPositionCorrespondOrNot(iNumber, -1) == 1)
        printf("si ");
    else
        printf("no ");
    printf("corresponden. ");

    printf("\n \n");
}
