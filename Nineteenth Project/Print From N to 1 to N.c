/**Este Procedimiento de N a 1 a N**/

#include<stdio.h>

void printFromNTo1ToN(iN)
{
    if (iN >= 1)
    {
        printf("%i ", iN);
        printFromNTo1ToN(iN - 1);
        if (iN != 1)
            printf("%i ", iN);
    }


}
