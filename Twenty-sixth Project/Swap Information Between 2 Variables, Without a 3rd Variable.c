/**Este Procedimiento Enseña como Intercambiar el Valor de 2 Variables, sin Utilizar una 3era Variables**/

#include<stdio.h>
#include<stdlib.h>

void swapWithout3Variables()
{
    int a = 2, b = 3;
    printf("Valores antes del intercambio. \n\tA: %i\n\tB: %i\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Valores despues del intercambio. \n\tA: %i\n\tB: %i\n", a, b);
    printf("\n \n");
}
