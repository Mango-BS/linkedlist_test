all.o: main.o functions.o
	gcc -o program main.o functions.o

main.o: main.c functions.h
	gcc -c main.c

functions.o: functions.c functions.h
	gcc -c functions.c

run:
	./program

clean:
	rm *.o
	rm *~