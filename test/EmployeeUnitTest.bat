:: Compilo código objeto
g++ -Wall -std=c++11 -c ..\src\Employee.cpp -o Employee.o -I..\include
g++ -Wall -std=c++11 -c EmployeeUnitTest.cpp -o EmployeeUnitTest.o -I..\include -I..\include\vendors\catch

:: Compilo el Binario
g++ -Wall -std=c++11 Employee.o EmployeeUnitTest.o -o EmployeeUnitTest.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
EmployeeUnitTest.exe