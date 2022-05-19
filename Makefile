buildEx:
	$(CC) src/HashMap.c src/HashMap.h examples/HashMapMain.c -o HashMapEx
	$(CC) src/SinglyLinkedList.c src/SinglyLinkedList.h examples/SinglyLinkedListMain.c -o SinglyLinkedListEx

clean:
	$(RM) SinglyLinkedListEx HashMapEx