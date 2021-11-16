#makefile by MIKE LEWIS FORTNITE CONCERT

all:	cp4

cp4:	User.o Main.o
	g++ User.o Main.o -o cp4

User.o:	User.cpp User.h
	g++ -c User.cpp

clean:
	rm -f *.o cp4