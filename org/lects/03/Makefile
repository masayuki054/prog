all:
	make index.html

index.html: index.org ../../info/common-header.org contents.org plan.org 
	org2html index.org

.PHONY: clean
clean:
	rm -f *.html


