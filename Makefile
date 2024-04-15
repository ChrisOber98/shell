shell: shell.o
	gcc shell.o -o shell

shell.o: shell.c
	gcc -c shell.c

run:
	./shell

clean:
	rm *.o
	rm shell