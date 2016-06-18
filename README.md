# Compilator-Bison-Flex
Interpretor hibrid pentru limbaj toy, cu parsare in python

## Structura proiect
1. 5_ex_corecte: contine 5 exemple de cod corect
2. 5_ex_gresite: contine 5 exemple de cod gresit
3. src: contine codul sursa
4. Documentatie
5. ruleaza_teste_ok.bat - executa fisierele de test corecte
6. ruleaza_teste_not_ok.bat - executa fisierele de test gresite

## Output pentru python
Codul python este generat in folderele de test. 
Daca se foloseste interpretorul in linia de comanda, se creaza un fisier default: cod_python.py

## Dependinte
1. win_bison 
2. win_flex
3. gcc

## Executie
1. toy.exe (interpretor)
2. toy.exe fisier_sursa
3. toy.exe fisier_sursa fisier_output


## Functionalitate 
* Aritmetica
* Functii aritmetice standard
* Logaritm 2 si 10
* Cos, sin, tan
* Cosh, sinh, tan
* Conversii (distante)
* Variabile
* Interpretor live sau cu sursa din fisier


## Compilare aplicatie
1. cd src
2. bison -d gram.y
3. flex lex.l
4. gcc gram.tab.c lex.yy.c -lm -o ..\toy


## Compilare cu make.bat
1. cd src
2. make




