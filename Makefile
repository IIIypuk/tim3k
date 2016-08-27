CC = tcc
OUTPUT = tim3k.exe

all:
	$(CC) src/tim3k.c -o $(OUTPUT)
