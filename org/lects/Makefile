all:
	make index.html
	(cd 01; make )
	(cd 02; make )
	(cd 03; make )
	(cd 04; make )
	(cd 05; make )
	(cd 06; make )

index.html: index.org contents.org
	org2html $^

.PHONY: clean
clean:
	rm -f *.html
	rm -f */*.html

