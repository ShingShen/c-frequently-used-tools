SRCS = \
	src/HashMap.c \
	src/HashMap2.c

EX = \
	examples/HashMapMain.c \
	examples/HashMapMain2.c

SRCSOUT = \
	HashMap.o \
	HashMap2.o

EXOUT = \
	HashMapMain.o \
	HashMapMain2.o

build: 
	$(CC) -c $(SRCS)
	$(CC) -c $(EX)

clean:
	$(RM) $(OUT)