a.out: 21500046.o 21500048.o main.o 
	gcc -o a.out 21500046.o 21500048.o main.o

21500046.o: 21500046.c 
	gcc -c -o 21500046.o 21500046.c

21500048.o: 21500048.c
	gcc -c -o 21500048.o 21500048.c

main.o: main.c
	gcc -c -o main.o main.c

clean:
	rm a.out 21500046.o 21500048.o main.o 
