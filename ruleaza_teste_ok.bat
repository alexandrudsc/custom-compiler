@echo OFF
set res=y
set /p res=Ruleaza testele corecte? (y/n)
IF %res% == y ( GOTO EXECUTIE) 
GOTO SFARSIT

:EXECUTIE
echo Test 1: 

toy.exe 5_ex_corecte\test1_ok.txt 5_ex_corecte\test1_ok
echo .
set /p delBuild=Press any key ...

echo Test 2: 
toy.exe 5_ex_corecte\test2_ok.txt 5_ex_corecte\test2_ok
echo .
set /p delBuild=Press any key ...

echo Test 3: 
toy.exe 5_ex_corecte\test3_ok.txt 5_ex_corecte\test3_ok
echo .
set /p delBuild=Press any key ...

echo Test 4: 
toy.exe 5_ex_corecte\test4_ok.txt 5_ex_corecte\test4_ok
echo .
set /p delBuild=Press any key ...

echo Test 5: 
toy.exe 5_ex_corecte\test5_ok.txt 5_ex_corecte\test5_ok
echo .

:SFARSIT
set delBuild=n
set /p delBuild=Press any key ...
@echo ON