/**Este Procedimiento se Encarga de Copiar un STRING y Pegar su Informacion en Otro STRING**/

#include<stdio.h>

char *stringCopy(char *cDestination, char *cSource)
{
    int f = 0;
    while (cSource[f] != '\0')
    {
        cDestination[f] = cSource[f];
        f++;
    }
    cDestination[f] = '\0';
    return cDestination;
}

void printCopy()
{
    char cSentence[21], cCopySentence[21];
    char *cTemp; /*Esta Variable Apunta Hacia la Direccion del Primer Elemento de un STRING*/
    printf("Ingresa una oracion (maximo 20 caracteres): ");
    scanf("%20[^\n]s", &cSentence);

    cTemp = stringCopy(cCopySentence, cSentence);

    printf("Impresion de la Copia de la Oracion Ingresada: \n\t%s", cTemp);
    printf("\nImpresion de la Copia de la Oracion Ingresada: \n\t%s", cCopySentence);

    printf("\n \n");
}
