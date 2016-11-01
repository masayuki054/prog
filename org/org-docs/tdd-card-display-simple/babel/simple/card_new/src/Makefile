
# src/Makefile 
.PHONY: clean
CFLAGS = -g -c -fPIC -I. 
LDFLAGS = -lc

libcard.a: card.o
	rm -f $@
	ar r $@ $^

card.o: card.c card.h
	gcc $< $(CFLAGS)

clean: 
	rm -f *.o *.so *~ \#* *.gch
