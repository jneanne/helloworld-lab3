PROGS:=helloworld goodbyeworld

all: $(PROGS)

clean:
	rm -f $(PROGS)

helloworld: helloworld.c
	$(CC) -o $@ $^

goodbyeworld: goodbyeworld.c
	$(CC) -o $@ $^
