#include "SinglyLinkedList.h"

void append(struct Node** head_ref, int new_data)
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

void deletePos(int pos)
{
    struct Node* temp = head;
    int i;
    if (pos == 0) {
        head = head->next;
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

void printList(struct Node* node)
{
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}