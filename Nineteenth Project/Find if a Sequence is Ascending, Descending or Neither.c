/**Este Procedimiento Se Encarga Determinar si los Digitos de un Numero son Ascendentes, Descendentes o Ninguno de los Dos**/

///Instrucciones
// La funcion lee un numero de izquierda a derecha y regresa:
//      1, si los digitos son ascendentes
//     -1, si los digitos son descendentes
//      0, si los digitos no se comportan de manera ascendente ni de manera descendente.

///Asunciones
// El numero que recibe la funcion siempre tiene 2 o mas digitos
// El numero que recibe la funcion no tiene digitos repetidos

#include<stdio.h>

int calculateAscendingOrDescendingOrNeither(int iNumber)
{
    /// Version Original No Optimizada by DAS
    /*int iResultSoFar;

    if (iNumber < 100)
    {
        if (iNumber % 10 > iNumber / 10)
            return 1;
        else
            return -1;
    }

    iResultSoFar = calculateAscendingOrDescendingOrNeither(iNumber % 100);

    if (iResultSoFar == 1)
    {
        if (calculateAscendingOrDescendingOrNeither(iNumber / 10) == 1)
            return 1;
        else if(calculateAscendingOrDescendingOrNeither(iNumber / 10) == -1)
            return 0;
    }
    else if (iResultSoFar == -1)
    {
        if (calculateAscendingOrDescendingOrNeither(iNumber / 10) == - 1)
            return - 1;
        else if (calculateAscendingOrDescendingOrNeither(iNumber / 10) == 1)
            return 0;
    }*/

    ///Version Optimizada by DAS
    if (iNumber < 100)
        return iNumber % 10 > iNumber / 10 ? 1 : -1;
    if (calculateAscendingOrDescendingOrNeither(iNumber % 100) == 1)
        return calculateAscendingOrDescendingOrNeither(iNumber / 10) == 1 ? 1 : 0;
    else if (calculateAscendingOrDescendingOrNeither(iNumber % 100) == -1)
        return calculateAscendingOrDescendingOrNeither(iNumber / 10) == - 1 ? -1 : 0;

}

void printAscendingOrDescendingOrNeither()
{
    int iNumber;
    do{
        printf("Ingresa un numero (mayor o igual a diez): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber < 10)
            printf("ERROR: El numero ingresado debe ser mayor o igual a diez. \n");
    }while (iNumber < 10);

    printf("La secuencia de digitos del numero ingresado (de izquierda a derecha) es ");
    if (calculateAscendingOrDescendingOrNeither(iNumber) == 1)
        printf("ascendente. ");
    else if (calculateAscendingOrDescendingOrNeither(iNumber) == -1)
        printf("descendente. ");
    else
        printf("ni ascendente ni descendente. ");

    printf("\n \n");
}


