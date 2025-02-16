/**Este Procedimiento Copia la Informacion de un Vector y la Asigna a otro Vector**/

void duplicateArray()
{
    int iArray[3] = {26,03,2004}, iCopyArray[3], f;

    printf("Vector Original\tVector Duplicado.\n");
    for (f = 0; f < 3; f++)
    {
        iCopyArray[f] = iArray[f];
        printf("- %i\t\t- %i\n", iArray[f], iCopyArray[f]);
    }

    printf("\n \n");
}
