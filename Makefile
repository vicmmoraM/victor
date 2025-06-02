#TO-DO: Add targers to compile the program (use Makefile3 as guide)
GCC=gcc
CFLAGS= -c -I.
programa: main.o functions.o functions.h
	$(GCC) -o programa main.o functions.o

main.o: main.c
	$(GCC) $(CFLAGS) main.c

functions.o: functions.c
	$(GCC) $(CFLAGS)  functions.c

.PHONY: clean
clean: 
	rm *.o programa



