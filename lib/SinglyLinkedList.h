#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} SinglyLinkedList;

extern void sllAdd();
extern void sllDeletePos();
extern void sllPrintList();

#endif