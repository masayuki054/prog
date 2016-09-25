# dirs and shell setting
MYHOME = ../../
ORG = $(MYHOME)/org/
SITE = $(MYHOME)/docs/
DIR = ./org-docs/
SHELL = zsh

# my documents
self: index.html

deploy: index.html
	mkdir -p $(SITE)/$(DIR)
	cp -p *.html $(SITE)/$(DIR)

.SUFFIXES: .org .html .ob
.org.html: ../../info/common-header.org contents.org 
	$(HOME)/bin/org2html $<

.ob.org:
	$(HOME)/COMM/bin/babel_expand_include.rb $< > $@
	org_tangle $@

DOCS = card-display cis-programming-lects cutter memos module poker software-test tdd-card-display-simple what-is-tdd


make-all:$(DOCS)
	make
	for d in $(DOCS); \
	do \
		(echo $$d; cd $$d; make) \
	done

deploy-all:
	make deploy
	for d in $(DOCS); \
	do \
		(echo $$d; cd $$d; make deploy) \
	done

.PHONY: clean
clean:
	rm *.html
	rm */*.html
