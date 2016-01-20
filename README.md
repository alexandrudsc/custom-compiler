# Compilator-Bison-Flex
Compilator pentru limbaj toy, cu parsare in python

## Structura continut
1. 5_ex_corecte: contine 5 exemple de cod corect
2. 5_ex_gresite: contine 5 exemple de cod gresit
3. src: contine codul sursa
4. Documentatie

## Functionalitate 
* Aritmetica
* Functii aritmetice standard
* Logaritm 2 si 10
* Cos, sin, tan
* Cosh, sinh, tan
* Conversii (distante)
* Variabile
* Interpretor live sau cu sursa din fisier


## Dependinte
1. Bison 
2. Flex
3. gcc

## Compilare si executare
1. cd src
2. bison -d gram.y
3. flex lex.l
4. gcc gram.tab.c lex.yy.c -lm -o ..\toy


## Compilare cu make.bat
1. cd src
2. make
3. toy.exe

