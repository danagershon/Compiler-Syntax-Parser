.PHONY: all clean

all: clean
	flex scanner.lex
	bison -d -Wcounterexamples parser.ypp
	g++ -std=c++17 -o hw2 *.c *.cpp
clean:
	rm -f lex.yy.c
	rm -f parser.tab.*pp
	rm -f hw2
