@echo OFF
set res=y
set /p res=Ruleaza testele gresite? (y/n)
IF %res% == y GOTO EXECUTIE 
GOTO SFARSIT

:EXECUTIE
echo Test 1: 
toy.exe 5_ex_gresite\test1_not_ok.txt 5_ex_gresite\test1_not_ok
set /p delBuild=Press any key ...

echo  Test 2: 
toy.exe 5_ex_gresite\test2_not_ok.txt 5_ex_gresite\test2_not_ok

set /p delBuild=Press any key ...
echo Test 3: 
toy.exe 5_ex_gresite\test3_not_ok.txt 5_ex_gresite\test3_not_ok

set /p delBuild=Press any key ...

echo Test 4: 
toy.exe 5_ex_gresite\test4_not_ok.txt 5_ex_gresite\test4_not_ok
set /p delBuild=Press any key ...

echo "Test 5: "
toy.exe 5_ex_gresite\test5_not_ok.txt 5_ex_gresite\test5_not_ok

:SFARSIT
set delBuild=n
set /p delBuild=Press any key ...
@echo ON