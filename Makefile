littlewinnigton:
	gcc -c main.c -o main.o	
	gcc -L/usr/local/lib -Wl,-rpath,/usr/local/lib -lSDL -lpthread \
	-I/usr/local/include/SDL -D_REENTRANT main.o -o littlewinnigton

.PHONY:
clean:
	rm -f littlewinnigton
	rm -f *.o
