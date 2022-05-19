#include "HashMap.h"

int getIndex(int key) {
    return (abs(key) % HASH_SIZE);
}

MyHashMap* myHashMapCreate() {
    MyHashMap* obj = (MyHashMap*)calloc(1, sizeof(MyHashMap));
    obj->hashTable = (struct HashNode**)calloc(HASH_SIZE, sizeof(struct HashNode*));
    obj->size = HASH_SIZE;
    return obj;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    int index = getIndex(key);
    struct HashNode* curList = obj->hashTable[index];
    struct HashNode* preNode = NULL;
    
    while (curList) {
        if (curList->key == key) {
            curList->val = value;
            return;
        }
        preNode = curList;
        curList = curList->next;
    }
    
    struct HashNode* newNode = (struct HashNode*)calloc(1, sizeof(struct HashNode));
    newNode->key = key;
    newNode->val = value;
    
    if (obj->hashTable[index] == NULL) {
        obj->hashTable[index] = newNode;
    } else {
        preNode->next = newNode;
    }
    return;
}

int myHashMapGet(MyHashMap* obj, int key) {
    int index = getIndex(key);
    struct HashNode* curList = obj->hashTable[index];
    
    while (curList) {
        if(curList->key == key) {
            return curList->val;
        }
        curList = curList->next;
    }
    return -1;
}

void myHashMapRemove(MyHashMap* obj, int key) {
    int index = getIndex(key);
    struct HashNode* curList = obj->hashTable[index];
    struct HashNode* preNode = NULL;
    
    while(curList) {
        if (curList->key == key) {
            struct HashNode* delNode = curList;
            if (preNode) {
                preNode->next = curList->next;
            } else {
                obj->hashTable[index] = curList->next;
            }
            free(delNode);
            return;
        }
        preNode = curList;
        curList = curList->next;
    }
    return;
}

void myHashMapFree(MyHashMap* obj) {
    for (int i = 0; i < obj->size; i++) {
        struct HashNode* curList = obj->hashTable[i];
        while (curList) {
            struct HashNode* delNode = curList;
            curList = curList->next;
            free(delNode);
        }
        obj->hashTable[i] = NULL;
    }
    free(obj->hashTable);
    free(obj);
    return;
}

void printHashMap(MyHashMap* obj) {
    if(obj->hashTable == NULL) return;
    
    for (int i = 0; i < obj->size; i++) {
        struct HashNode* curNode = obj->hashTable[i];
        while(curNode != NULL) {
            printf("i = %d, {%d, %d}\n", i, curNode->key, curNode->val);
            curNode = curNode->next;
        }
    }
    return;
}
