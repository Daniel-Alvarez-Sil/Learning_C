/**Este Procedimiento Determina el Numero de Veces que un Numero se Repite Dentro de una Lista**/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct element_of_a_list{
    int iData;
    struct element_of_a_list *next;
}node;

int numberOfAppearancesOfNumberInList(node *head, int iNumber)
{
    int iCounter = 0;
    node *current_node = head;
    while (current_node != NULL)
    {
        if (iNumber == current_node->iData)
            iCounter++;
        current_node = current_node->next;
    }
    return iCounter;
}
