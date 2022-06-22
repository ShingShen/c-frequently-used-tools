#include "SinglyLinkedList.h"

void sllAdd(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;

    return;
}

void sllDeletePos(struct Node** head_ref, int pos)
{
    struct Node* temp = *head_ref;
    int i;
    if (pos == 0) {
        *head_ref = (*head_ref)->next;
        temp->next = NULL;
        free(temp);
    } else {
        for (i = 0; i < pos-1; i++) {
            temp = temp->next;
        }
        struct Node* del = temp->next;
        temp->next = temp->next->next;
        del->next = NULL;
        free(del);
    }
    return;
}

void sllPrintList(struct Node* node)
{
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}