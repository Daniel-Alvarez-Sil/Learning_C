int dateBirth()
{
    int iBirth, iAge;

    printf("Ingresa el a�o actual: ");
    scanf("%i", &iBirth);
    printf("Ingresa tu edad: ");
    scanf("%i", &iAge);

    printf("Tu nacimiento fue en: %i \n \n", iBirth - iAge);
}
