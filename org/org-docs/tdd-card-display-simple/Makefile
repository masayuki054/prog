all: babel
	rm -f index.html
	make index.html

.SUFFIXES: .org .html .ob
.org.html: ../info/common-header.org contents.org 
	~/bin/org2html $<

.ob.org:
	~/COMM/bin/babel_expand_include.rb $< > $@
	org_tangle $@

index.html: index.org contents.org suit_new.org no_new.org card_new.org

babel:
	mkdir -p babel/simple/suit_new
	mkdir -p babel/simple/no_new
	mkdir -p babel/simple/card_new
	mkdir -p babel/simple/card_to_string
	mkdir -p babel/simple/cards_sort

.PHONY: clean
clean:
	rm *.html

