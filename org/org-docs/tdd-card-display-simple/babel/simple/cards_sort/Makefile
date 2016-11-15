# ~/progs/card_display/simple/Makefile
.PHONY: clean card_test

card_test:
	(cd src; make)
	(cd test; make)	
	cutter -v v test/

clean:
	(cd src; make clean)
	(cd test; make clean)
	rm -f *.o *.so *~ \#* *.gch
