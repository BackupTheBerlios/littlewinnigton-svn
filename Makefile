littlewinnigton: main.cpp CBase.cpp CBase.h
	g++ -L/usr/lib -Wl,-rpath,/usr/lib -lSDL -lpthread -I/usr/include/SDL \
		-D_REENTRANT main.cpp CBase.cpp -o littlewinnigton
	
.PHONY:
clean:
	rm -f littlewinnigton
	rm -f *.o
