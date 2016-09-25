MYHOME = ../../
ORG = $(MYHOME)/org/
SITE = $(MYHOME)/docs/
DIR = ./org-docs/
SHELL = zsh

self: index.html
	rm -f index.html
	make index.html

deploy: index.html
	mkdir -p $(SITE)/$(DIR)
	cp *.html $(SITE)/$(DIR)

.SUFFIXES: .org .html .ob
.org.html: ../../info/common-header.org contents.org 
	~/bin/org2html $<

.ob.org:
	~/COMM/bin/babel_expand_include.rb $< > $@
	org_tangle $@

index.html: index.org 

all:
	make index.html
	(cd card-display; make)
	(cd tdd-card-display-simple; make)
	(cd what-is-tdd; make)
	(cd memos; make)


.PHONY: clean
clean:
	rm *.html
	rm */*.html

