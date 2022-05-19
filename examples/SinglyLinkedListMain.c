#include "../src/SinglyLinkedList.h"

int main(void) {
    puts("Create Linked List:");
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);
    append(&head, 60);
    append(&head, 70);
    printList(head);
    deletePos(3);
    puts("\n\nLinked List after Deletion of position 3:");
    printList(head);
    deletePos(0);
    puts("\n\nLinked List after Deletion of position 0:");
    printList(head);
    printf("\n");
    return 0;
}