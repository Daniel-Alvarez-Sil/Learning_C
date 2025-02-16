//Procedimiento para Determinar si un Numero es ODD o EVEN

int evenORodd()
{
    int iA;
    printf("Enter a whole number (0 - infinity): ");
    scanf("%i", &iA);
    if (iA % 2 == 0)
        printf("The given number is even");
    else
        printf("The given number is odd");
    return 0;
}
