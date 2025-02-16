/**Este Procedimiento Imprime 10 Veces Algun String**/

int printTen()
{
    char cString[25];
    int iCounter = 1;
    printf("Ingresa una oracion para que se repita 10 veces: ");
    scanf("%[^\n]s", &cString);

    do{
            printf("\n %s", cString);
            iCounter++;

    }while(iCounter < 11);

    printf("\n \n");

    return 0;

}
