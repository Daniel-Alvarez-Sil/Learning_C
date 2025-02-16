/**Este Procedimiento Determina si un Numero Está Presente en la Lista Dinámica**/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct element_of_a_list{
    int iData;
    struct element_of_a_list *next;
}node;

bool numberExistsInListQuestion(node *head, int iNumber)
{
    node *current_node = head;
    while (current_node != NULL)
    {
        if (iNumber == current_node->iData)
            return true;
        current_node = current_node->next;
    }
    return false;
}

void printIfNumberExists(node *head)
{
    int iNumber;
    printf("\nIngresa un numero: ");
    scanf("%i", &iNumber);
    if (numberExistsInListQuestion(head, iNumber))
    {
        printf("El numero, %i, existe en la lista. \n", iNumber);
        printf("Total apariciones: %i. \n", numberOfAppearancesOfNumberInList(head, iNumber));
    }
    else
        printf("El numero, %i, no existe en la lista. \n", iNumber);
}
