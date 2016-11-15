all:
	make index.html

index.html: index.org ../../info/common-header.org contents.org plan.org resume.org response.org 
	org2html index.org

.PHONY: clean
clean:
	rm -f *.html
	rm -f */*.html



