calc: lex.yy.c compilator.tab.c
	gcc -g lex.yy.c compilator.tab.c -o compilator

lex.yy.c: y.tab.c compilator.l
	flex compilator.l

y.tab.c: compilator.y
	bison -d compilator.y

clean: 
	rm -f lex.yy.c compilator.tab.c compilator.tab.h compilator

