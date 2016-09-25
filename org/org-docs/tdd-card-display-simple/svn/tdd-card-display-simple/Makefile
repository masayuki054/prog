all: babel
	rm index.html
	make index.html

.SUFFIXES: .org .html
.org.html: ../info/common-header.org contents.org 
	~/bin/org2html $<

index.html:

babel:
	mkdir -p babel/simple/suit_new
	mkdir -p babel/simple/no_new
	mkdir -p babel/simple/card_new

.PHONY: clean
clean:
	rm *.html

