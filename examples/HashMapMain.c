#include "../src/HashMap.h"

int main(void)
{
    MyHashMap* hashMap = myHashMapCreate();
    myHashMapPut(hashMap, 0, 12);
    myHashMapPut(hashMap, 1, 2);
    myHashMapPut(hashMap, 3, 17);
    myHashMapPut(hashMap, 4, 17);
    myHashMapPut(hashMap, 5, 23);
    myHashMapPut(hashMap, 6, 100);
    myHashMapPut(hashMap, 7, 27);
    
    myHashMapRemove(hashMap, 6);
    
    // myHashMapFree(hashMap);

    printHashMap(hashMap);
    
    printf("The value of key 0 is: %d\n", myHashMapGet(hashMap, 0));
    printf("The value of key 2 is: %d\n", myHashMapGet(hashMap, 2));

    return 0;
}