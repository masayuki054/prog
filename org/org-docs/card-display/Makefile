COMMON = ~/COMM/Lects/prog/site/info/common-header.org
CONTENTS = card-display-problem.org card-display-simple-design.org card-display-multi.org card-display-sort.org

all: index.html

.SUFFIXES: .org .html
.org.html: 
	~/bin/org2html $<

index.html: $(COMMON) $(CONTENTS)

.PHONY: clean
clean:
	rm *.html

