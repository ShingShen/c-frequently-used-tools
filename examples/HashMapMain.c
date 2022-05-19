#include "../src/HashMap.h"

int main(void)
{
    HashMap* hashMap = hashMapCreate();
    hashMapPut(hashMap, 0, 12);
    hashMapPut(hashMap, 1, 2);
    hashMapPut(hashMap, 3, 17);
    hashMapPut(hashMap, 4, 17);
    hashMapPut(hashMap, 5, 23);
    hashMapPut(hashMap, 6, 100);
    hashMapPut(hashMap, 7, 27);
    
    hashMapRemove(hashMap, 6);
    
    // hashMapFree(hashMap);

    printHashMap(hashMap);
    
    printf("The value of key 0 is: %d\n", hashMapGet(hashMap, 0));
    printf("The value of key 2 is: %d\n", hashMapGet(hashMap, 2));

    return 0;
}