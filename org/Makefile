MYHOME = ~/COMM/Lects/prog/prog2016/
ORG = $(MYHOME)/org/
SITE = $(MYHOME)/site/
DIR = ./
SHELL = zsh

index.html: index.org

all:
	(cd lects; make)
	(cd org-docs; make)
	make index.html

.SUFFIXES: .org .html
.org.html: info/common-header.org 
	$(HOME)/bin/org2html $<
	mkdir -p $(SITE)/$(DIR)
	cp $@ $(SITE)/$(DIR)

.PHONY: clean
clean:
	rm -f *.html
	(cd lects; make clean)
	(cd org-docs; make clean)



