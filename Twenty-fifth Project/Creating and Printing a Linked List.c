/**Este Procedimiento se Encarga de Crear e Imprimir un Lista Vinculada**/

#include<stdio.h>
#include<stdlib.h>

typedef struct element_of_a_list{
    int iData;
    struct element_of_a_list *next;
}node;

void printLinkedList(node *head)
{
    printf("\nImpresion de los Elementos de la Lista. \n");

    node *current_node = head;
    while (current_node != NULL)
    {
        printf("\tElemento: %i\n", current_node->iData);
        current_node = current_node->next;
    }
}

node *createLinkedList()
{
    printf("Ingreso de Elementos de la Lista. \n");

    node *head;
    node *current_node;
    int iNumber;

    printf("\tIngresa un numero o ingresa '-1' para terminar el proceso: ");
    scanf("%i", &iNumber);

    if (iNumber == -1)
        return NULL;

    head = malloc(sizeof(node));
    current_node = head;

    current_node->iData = iNumber;

    printf("\tIngresa un numero o ingresa '-1' para terminar el proceso: ");
    scanf("%i", &iNumber);

    while (iNumber != -1)
    {
        current_node->next = malloc(sizeof(node));
        current_node = current_node->next;
        current_node->iData = iNumber;

        printf("\tIngresa un numero o ingresa '-1' para terminar el proceso: ");
        scanf("%i", &iNumber);
    }
    current_node->next = NULL;
    return head;
}

void callProceduresOfLists()
{
    printLinkedList(createLinkedList());
}
