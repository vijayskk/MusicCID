CC=gcc
CFLAGS=""
EXEC=run
main: src/main.c
	$(CC) $? $(CFLAGS) -o build/$(EXEC).out
clean:
	rm build/*.out
run:
	build/$(EXEC).out