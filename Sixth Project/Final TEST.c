/**This Code Solves the Problems Established for the TEST**/

#include<stdio.h>
#include<stdlib.h>

int mainBlock()
{
     compareTwoIntegers();
     compareThreeIntegers();
     ascORnot();
     posORnegORzero();
     return 0;
}

int compareTwoIntegers()
{
    printf("Comparison Between 2 Integers \n");

    int iNum1, iNum2;
    printf("Enter an integer: ");
    scanf("%i", &iNum1);
    printf("Enter an integer: ");
    scanf("%i", &iNum2);

    if (iNum1 == iNum2)
        printf("Result: EQUAL");
    else
        printf("Result: NOT EQUAL");

    printf("\n \n");
    return 0;
}

int compareThreeIntegers()
{
    printf("Comparison Between 3 Integers \n");

    int iNum1, iNum2, iNum3;
    printf("Enter an integer: ");
    scanf("%i", &iNum1);
    printf("Enter an integer: ");
    scanf("%i", &iNum2);
    printf("Enter an integer: ");
    scanf("%i", &iNum3);

    if (iNum1 == iNum2 && iNum2 == iNum3)
        printf("Result: EQUAL");
    else
        printf("Result: NOT EQUAL");

    printf("\n \n");
    return 0;
}

int ascORnot()
{
    printf("Ascending Set of Integers? \n");

    int iNum1;
    printf("Enter an integer: ");
    scanf("%i", &iNum1);
    if ((iNum1 / 100) < ( (iNum1 % 100 - iNum1 % 10) / 10 ) && ( (iNum1 % 100 - iNum1 % 10) / 10 ) < (iNum1 % 10))
        printf("Result: ASCENDING ");
    else
        printf("Result: NOT ASCENDING");

    printf("\n \n");
    return 0;
}

int posORnegORzero()
{
    printf("Negative, Positive or Zero? \n");

    float fNumber;
    printf("Enter a number: ");
    scanf("%f", &fNumber);
    if (fNumber == 0)
        printf("Result: 0");
    else if (fNumber > 0)
        printf("Result: 1");
    else printf("Result: -1");

    printf("\n \n");
    return 0;
}
