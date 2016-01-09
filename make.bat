:: fisier .bat pentru compilare/ stergere
	@echo OFF
:: daca exista optiunea clean, stergere fisiere (jump la clean)
	IF "%1" == "clean" GOTO :clean

:: daca nu exista clean, mergem la create
	GOTO :create
:clean
	del gram.tab.c
	del lex.yy.c
	del calc.exe
	GOTO :end

:create
	win_flex_bison-latest\win_bison.exe -d gram.y
	win_flex_bison-latest\win_flex.exe lex.l
	gcc gram.tab.c lex.yy.c -o calc
	GOTO :end

:end
	echo ON