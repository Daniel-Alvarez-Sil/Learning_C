/**Este Procedimiento se Encarga de Calcular el Numero de Elementos en una Lista Dinamica**/

#include<stdio.h>
#include<stdlib.h>

typedef struct element_of_a_list{
    int iData;
    struct element_of_a_list *next;
}node;

int numberOfElementsInList(node *head)
{
    int iCounter = 0;
    node *current_node = head;
    while (current_node != NULL)
    {
        iCounter++;
        current_node = current_node->next;
    }
    return iCounter;
}
