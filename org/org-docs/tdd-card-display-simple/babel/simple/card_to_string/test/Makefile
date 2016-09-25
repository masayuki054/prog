
# test/Makefile
.PHONY: clean
CFLAGS = -fPIC -I../src `pkg-config cutter --cflags`
LDFLAGS = -L../src/ -lcard `pkg-config cutter --libs`

test_card.so: test_card.o
	gcc -o $@ --shared $^ $(LDFLAGS)

test_card.o: test_card.c
	gcc -c $< $(CFLAGS)

clean:
	rm -f *.o *.so *~ \#* *.gch
