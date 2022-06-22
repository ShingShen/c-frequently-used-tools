#include "../lib/SinglyLinkedList.h"

int main(void) {
    SinglyLinkedList* head = NULL;
    puts("Create Linked List:");
    sllAdd(&head, 10);
    sllAdd(&head, 20);
    sllAdd(&head, 30);
    sllAdd(&head, 40);
    sllAdd(&head, 50);
    sllAdd(&head, 60);
    sllAdd(&head, 70);
    sllPrintList(head);
    sllDeletePos(&head, 3);
    puts("\n\nLinked List after Deletion of position 3:");
    sllPrintList(head);
    sllDeletePos(&head, 0);
    puts("\n\nLinked List after Deletion of position 0:");
    sllPrintList(head);
    printf("\n");
    return 0;
}