MYHOME = $(HOME)/COMM/Lects/prog/prog2016/
ORG = $(MYHOME)/org/
SITE = $(MYHOME)/site/
DIR = ./org-docs/cutter/
SHELL = zsh

all: index.html

deploy: index.html
	mkdir -p $(SITE)$(DIR)
	cp $< $(SITE)$(DIR)

.SUFFIXES: .org .html .ob
.org.html: ../../info/common-header.org contents.org 
	$(HOME)/bin/org2html $<

.ob.org:
	~/COMM/bin/babel_expand_include.rb $< > $@
	org_tangle $@

index.html: index.org cutter.org

.PHONY: clean
clean:
	rm *.html

