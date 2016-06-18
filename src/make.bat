:: fisier .bat pentru compilare/ stergere
	@echo OFF
:: daca exista optiunea clean, stergere fisiere (jump la clean)
	IF "%1" == "clean" GOTO :clean

:: daca nu exista clean, mergem la create
	GOTO :create
:clean
	del gram.tab.c
 del gram.tab.h del lex.yy.c
	del ..\toy.exe
	GOTO :end

:create
	win_flex_bison\win_bison.exe -d gram.y
	win_flex_bison\win_flex.exe lexer.l
	gcc gram.tab.c lex.yy.c -o ..\toy
	GOTO :end

:end
	echo ON