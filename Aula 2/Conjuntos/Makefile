cliente: cliente.o conjunto.o
	gcc -o cliente cliente.o conjunto.o

cliente.o: cliente.c conjunto.h
	gcc -c cliente.c

conjunto.o: conjunto.c conjunto.h
	gcc -c conjunto.c

clear:
	rm .*o cliente
