#include "../lib/SinglyLinkedList.h"

int main(void) {
    struct Node* head = NULL;
    puts("Create Linked List:");
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);
    append(&head, 60);
    append(&head, 70);
    printList(head);
    deletePos(&head, 3);
    puts("\n\nLinked List after Deletion of position 3:");
    printList(head);
    deletePos(&head, 0);
    puts("\n\nLinked List after Deletion of position 0:");
    printList(head);
    printf("\n");
    return 0;
}