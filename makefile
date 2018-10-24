all: tester.o
	gcc tester.o

clear:
	rm *.o
	
run:
	./a.out

tester.o: tester.c
	gcc -c -g tester.c
