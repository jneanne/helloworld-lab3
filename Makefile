all: helloworld

clean:
	rm -f helloworld

helloworld: helloworld.c
	$(CC) -o $@ $^

