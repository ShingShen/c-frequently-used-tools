buildEx:
	$(CC) lib/HashMap.c lib/HashMap.h examples/HashMapMain.c -o HashMapEx
	$(CC) lib/SinglyLinkedList.c lib/SinglyLinkedList.h examples/SinglyLinkedListMain.c -o SinglyLinkedListEx

clean:
	$(RM) SinglyLinkedListEx HashMapEx