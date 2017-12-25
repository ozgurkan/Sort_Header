Sort_Header:main.o Sort.o
	gcc  -o Sort_Header main.o Sort.o
main.o:main.c Sort.h
	gcc -c main.c Sort.h

Sort.o: Sort.c Sort.h
	gcc -c Sort.c Sort.h
