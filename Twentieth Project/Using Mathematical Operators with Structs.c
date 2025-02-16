/**Este Procedimiento Explora el Uso de Operadores Matematicos con Estructuras**/

///No se pueden usar los operadores matematicos de forma habitual con las variables de tipo estructura

#include<stdio.h>
#include<string.h>

typedef struct rationalNumber{
    int numerator;
    int denominator;
}fraction;

fraction incrementFraction (fraction frIncrement) // ++
{
    printf("\t%i/%i + 1\n\n", frIncrement.numerator, frIncrement.denominator);
    frIncrement.numerator = frIncrement.numerator + frIncrement.denominator;
    return frIncrement;
}

fraction decrementFraction (fraction frDecrement) // --
{
    printf("\t%i/%i - 1\n\n", frDecrement.numerator, frDecrement.denominator);
    frDecrement.numerator = frDecrement.numerator - frDecrement.denominator;
    return frDecrement;
}

fraction subtractFraction (fraction frMinuend, fraction frSubtrahend) // -
{
    printf("\t%i/%i - %i/%i\n\n", frMinuend.numerator, frMinuend.denominator, frSubtrahend.numerator, frSubtrahend.denominator);

    fraction frDifference;
    int iCommonDenominator = frMinuend.denominator;

    if (frMinuend.denominator != frSubtrahend.denominator)
        iCommonDenominator = calculateCommonDenominator(frMinuend.denominator, frSubtrahend.denominator);

    frMinuend.numerator = frMinuend.numerator * (iCommonDenominator / frMinuend.denominator);
    frSubtrahend.numerator = frSubtrahend.numerator * (iCommonDenominator / frSubtrahend.denominator);

    //frMinuend.denominator = iCommonDenominator;
    //frSubtrahend.denominator = iCommonDenominator;

    frDifference.numerator = frMinuend.numerator - frSubtrahend.numerator;
    frDifference.denominator = iCommonDenominator;

    return frDifference;
}

fraction addFraction (fraction frAddend1, fraction frAddend2) // +
{
    printf("\t%i/%i + %i/%i\n\n", frAddend1.numerator, frAddend1.denominator, frAddend2.numerator, frAddend2.denominator);

    fraction frSum;
    int iCommonDenominator = frAddend1.denominator;

    if (frAddend1.denominator != frAddend2.denominator)
        iCommonDenominator = calculateCommonDenominator(frAddend1.denominator, frAddend2.denominator);

    frAddend1.numerator = frAddend1.numerator * (iCommonDenominator / frAddend1.denominator);
    frAddend2.numerator = frAddend2.numerator * (iCommonDenominator / frAddend2.denominator);

    frSum.numerator = frAddend1.numerator + frAddend2.numerator;
    frSum.denominator = iCommonDenominator;

    return frSum;
}

fraction multiplyFraction (fraction frFactor1, fraction frFactor2) // *
{
    printf("\t%i/%i * %i/%i\n\n", frFactor1.numerator, frFactor1.denominator, frFactor2.numerator, frFactor2.denominator);

    fraction frProduct;

    frProduct.numerator = frFactor1.numerator * frFactor2.numerator;
    frProduct.denominator = frFactor1.denominator * frFactor2.denominator;

    return frProduct;
}

fraction divideFraction (fraction frDividend, fraction frDivisor) // /
{
    printf("\t%i/%i / %i/%i\n\n", frDividend.numerator, frDividend.denominator, frDivisor.numerator, frDivisor.denominator);

    fraction frQuotient;

    frQuotient.numerator = frDividend.numerator * frDivisor.denominator;
    frQuotient.denominator = frDividend.denominator * frDivisor.numerator;

    return frQuotient;
}

int calculateCommonDenominator (int iDenominator1, int iDenominator2)
{
    int iTemp, f;
    if (iDenominator1 < iDenominator2)
    {
        iTemp = iDenominator1;
        iDenominator1 = iDenominator2;
        iDenominator2 = iTemp;
    }
    for (f = iDenominator1; f <= iDenominator1 * iDenominator2; f = f + iDenominator1)
    {
        if (f % iDenominator2 == 0)
            break;
    }
    return f;
}

int biggerFraction (fraction fr1, fraction fr2) // >
{
    printf("\t%i/%i > %i/%i ?\n\n", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator);

    int iCommonDenominator = fr1.denominator;

    if (fr1.denominator != fr2.denominator)
        iCommonDenominator = calculateCommonDenominator(fr1.denominator, fr2.denominator);

     fr1.numerator = fr1.numerator * (iCommonDenominator / fr1.denominator);
     fr2.numerator = fr2.numerator * (iCommonDenominator / fr2.denominator);

     if (fr1.numerator > fr2.numerator)
            return 1;
    else
        return 0;
}

int smallerFraction (fraction fr1, fraction fr2) // <
{
    printf("\t%i/%i < %i/%i ?\n\n", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator);

    int iCommonDenominator = fr1.denominator;

    if (fr1.denominator != fr2.denominator)
        iCommonDenominator = calculateCommonDenominator(fr1.denominator, fr2.denominator);

    fr1.numerator = fr1.numerator * (iCommonDenominator / fr1.denominator);
    fr2.numerator = fr2.numerator * (iCommonDenominator / fr2.denominator);

    if (fr1.numerator < fr2.numerator)
        return 1;
    else
        return 0;

}

int equivalentFraction (fraction fr1, fraction fr2)
{
    printf("\t%i/%i = %i/%i ?\n\n", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator);

    if (fr1.numerator * fr2.denominator == fr2.numerator * fr1.denominator)
        return 1;
    else
        return 0;
}

int notEquivalentFraction (fraction fr1, fraction fr2)
{
    printf("\t%i/%i != %i/%i ?\n\n", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator);

    if (fr1.numerator * fr2.denominator != fr2.numerator * fr1.denominator)
        return 1;
    else
        return 0;
}

void inputFractionFromUser(fraction *frInput)
{
        printf("\nIngresa una fraccion. \n");

        printf("\tIngresa el numerador: ");
        scanf("%i", &(*frInput).numerator);
        fflush(stdin);

        printf("\tIngresa el denominador: ");
        scanf("%i", &(*frInput).denominator);
        fflush(stdin);

        printf("Fraccion ingresada --> %i/%i \n\n", (*frInput).numerator, (*frInput).denominator);
}

void printFractionResult(fraction frOutput)
{
    printf("El resultado de la operacion es %i/%i \n\n", frOutput.numerator, frOutput.denominator);
}

void menuToOperateUponFractions()
{
    fraction frInput, frNumber, frResult;
    char cBackToMenu[3] = {' ', ' ', '\0'}, cBackToStart[3] = {' ', ' ', '\0'};
    int iOption;

    do{
        inputFractionFromUser(&frInput);

        do{
            printf("\t---> MENU <---\n");
            printf("1.  %i/%i +  1 \n", frInput.numerator, frInput.denominator);
            printf("2.  %i/%i -  1 \n", frInput.numerator, frInput.denominator);
            printf("3.  %i/%i -  Y/X \n", frInput.numerator, frInput.denominator);
            printf("4.  %i/%i +  Y/X \n", frInput.numerator, frInput.denominator);
            printf("5.  %i/%i x  Y/X \n", frInput.numerator, frInput.denominator);
            printf("6.  %i/%i /  Y/X \n", frInput.numerator, frInput.denominator);
            printf("7.  %i/%i >  Y/X ? \n", frInput.numerator, frInput.denominator);
            printf("8.  %i/%i <  Y/X ? \n", frInput.numerator, frInput.denominator);
            printf("9.  %i/%i =  Y/X ? \n", frInput.numerator, frInput.denominator);
            printf("10. %i/%i != Y/X ? \n", frInput.numerator, frInput.denominator);

            printf("\n");

            printf("Ingresa la opcion seleccionada: ");
            scanf("%i", &iOption);
            fflush(stdin);

            switch (iOption)
            {
            case 1:
                frResult = incrementFraction(frInput);
                break;
            case 2:
                frResult = decrementFraction(frInput);
                break;
            case 3:
                inputFractionFromUser(&frNumber);
                frResult = subtractFraction(frInput, frNumber);
                break;
            case 4:
                inputFractionFromUser(&frNumber);
                frResult = addFraction(frInput, frNumber);
                break;
            case 5:
                inputFractionFromUser(&frNumber);
                frResult = multiplyFraction(frInput, frNumber);
                break;
            case 6:
                inputFractionFromUser(&frNumber);
                frResult = divideFraction(frInput, frNumber);
                break;
            case 7:
                inputFractionFromUser(&frNumber);
                frResult.numerator = biggerFraction(frInput, frNumber);
                break;
            case 8:
                inputFractionFromUser(&frNumber);
                frResult.numerator = smallerFraction(frInput, frNumber);
                break;
            case 9:
                inputFractionFromUser(&frNumber);
                frResult.numerator = equivalentFraction(frInput, frNumber);
                break;
            case 10:
                inputFractionFromUser(&frNumber);
                frResult.numerator = notEquivalentFraction(frInput, frNumber);
                break;
            default:
                printf("ERROR: El numero de opcion ingresada no existe. Por favor escoge otra opcion. \n");
                break;
            }

            if (iOption >= 1 && iOption <=10)
            {
                if (iOption >= 1 && iOption <= 6)
                    printFractionResult(frResult);
                else
                {
                    if (iOption == 7 || iOption == 8)
                        printf("La inecualidad ");
                    else
                        printf("La ecuacion ");

                    if (frResult.numerator == 1)
                        printf("es verdadera. \n\n");
                    else
                        printf("es falsa. \n\n");
                }

                printf("Deseas regresar al menu (si/no)?: ");
                scanf("%2s", &cBackToMenu);
                fflush(stdin);
            }
            else
                strcpy(cBackToMenu, "si");

        } while (strcmp(cBackToMenu, "si") == 0);

        printf("\nDeseas ingresar otra fraccion (si/no)?: ");
        scanf("%s", &cBackToStart);
        fflush(stdin);

    } while (strcmp(cBackToStart, "si") == 0);

    printf("\nGracias por usar el sistema. Hasta luego!");

    printf("\n \n");
}
