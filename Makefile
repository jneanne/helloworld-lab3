PROGS:=helloworld goodbyeworld fact

all: $(PROGS)

clean:
	rm -f $(PROGS)

helloworld: helloworld.c
	$(CC) -o $@ $^

goodbyeworld: goodbyeworld.c
	$(CC) -o $@ $^

fact: fact.c
	$(CC) -o $@ $^
