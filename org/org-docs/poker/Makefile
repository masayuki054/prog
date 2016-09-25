MYHOME = ~/COMM/Lects/prog/prog2016/
ORG = $(MYHOME)/org/
SITE = $(MYHOME)/site/
DIR = ./org-docs/poker
SHELL = zsh

all: babel
	rm -f index.html
	make index.html

deploy: all
	mkdir -p $(SITE)/$(DIR)
	cp *.html $(SITE)/$(DIR)


.SUFFIXES: .org .html .ob
.org.html: ../../info/common-header.org contents.org 
	~/bin/org2html $<

.ob.org:
	~/COMM/bin/babel_expand_include.rb $< > $@
	org_tangle $@

index.html: index.org contents.org story.org poker.org card.org deck.org hand.org

babel:
	mkdir -p poker/
	mkdir -p poker/card
	mkdir -p poker/deck

.PHONY: clean
clean:
	rm *.html

