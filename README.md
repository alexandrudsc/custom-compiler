# Compilator-Bison-Flex
Compilator pentru limbaj toy, cu parsare in python

## Functionalitate 
* Aritmetica
* Functii aritmetice standard
* Logaritm 2 si 10
* Cos, sin, tan
* Cosh, sinh, tan
* Conversii (monede, distante)
* Variabile
* Interpretor live sau cu sursa din fisier


## Dependinte
1. Bison 
2. Flex
3. gcc compiler

## Compilare si executare
1. bison -d gram.y
2. flex lex.l
3. gcc gram.tab.c lex.yy.c -lm -o compilator


## Compilare cu make.bat
1. make
2. compilator.exe
