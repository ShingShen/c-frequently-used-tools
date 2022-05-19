#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 1000000

struct HashNode {
    int key;
    int val;
    struct HashNode* next;
};

typedef struct {
    struct HashNode** hashTable;
    int size;
} HashMap;

extern int getIndex();
extern HashMap* hashMapCreate();
extern void hashMapPut();
extern int hashMapGet();
extern void hashMapRemove();
extern void hashMapFree();
extern void printHashMap();

#endif