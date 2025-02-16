/**Este Proyecto es un Repaso del Tema de Listas (Linked Lists)**/

#include <stdio.h>
#include <stdlib.h>

typedef struct element_of_a_list{
    int iData;
    struct element_of_a_list *next;
}node;

int main()
{
    node *startOfList = createLinkedList();
    printLinkedList(startOfList);
    printf("\nLa lista tiene %i elementos. \n", numberOfElementsInList(startOfList));
    printIfNumberExists(startOfList);

    printf("\n \n");
    return 0;
}
