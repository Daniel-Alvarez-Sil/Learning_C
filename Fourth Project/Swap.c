int swapInt()
{
    int a, b, temp;
    printf("Ingresa el valor entero de a: ");
    scanf("%i", &a);
    printf("Ingresa el valor entero de b: ");
    scanf("%i", &b);
    printf("\n a = %i \n b = %i \n \n **********SWAP********** \n \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf(" a = %i \n b = %i \n \n", a, b);
}
