CC=gcc
RM=rm

all:pfunc pointer ppointer swap ppstring

pfunc:pfunc.c
	$(CC) $< -o $@

pointer:pointer.c
	$(CC) $^ -o $@

ppointer:ppointer.c
	$(CC) $^ -o $@

swap:swap.c
	$(CC) $^ -o $@

ppstring:ppstring.c
	$(CC) $^ -o $@

clean:
	$(RM) -f pfunc pointer ppointer swap ppstring
