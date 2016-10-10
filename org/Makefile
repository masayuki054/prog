ORG = .
SITE = ../docs/

index.html: index.org

all:
	make index.html
	(cd lects; make)
	(cd org-docs; make)
	(cd supplement; make)
	(cd memos; make)


.SUFFIXES: .org .html
.org.html: info/common-header.org 
	$(HOME)/bin/org2html $<
	mkdir -p $(SITE)/$(DIR)
	sed -e 's/http:\/\//https:\/\//g' $@ | sed -e 's/https:\/\/www.pirilampo.org/https:\/\/wiki.cis.iwate-u.ac.jp\/~suzuki\/org-html-theme/' > $(SITE)/$@
	# cp $@ $(SITE)/$(DIR)

.PHONY: clean
clean:
	rm -f *~ \#* */*~ */\#*~



