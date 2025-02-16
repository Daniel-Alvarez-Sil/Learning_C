int swapFloat()
{
    float fA, fB, fTemp;
    printf("Enter a value for the floating number \"a\": ");
    scanf("%f", &fA);
    printf("Enter a value for the floating number \"b\": ");
    scanf("%f", &fB);
    printf("\n a = %0.2f \n b = %0.2f", fA, fB);
    fTemp = fA;
    fA = fB;
    fB = fTemp;
    printf("\n \n ++++++SWAP++++++ \n \n a = %0.2f \n b = %0.2f \n \n", fA, fB);
    return 0;
}
