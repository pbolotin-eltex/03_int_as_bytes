# Make int-as-bytes project

.PHONY = clean all
CC := gcc

all: int_as_bytes

int_as_bytes : int_as_bytes.o
int_as_bytes.o : int_as_bytes.c

clean :
	rm -f *.o int_as_bytes

