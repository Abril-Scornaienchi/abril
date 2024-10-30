:: Compilo código objeto
g++ -Wall -std=c++11 -c ..\src\Order.cpp -o Order.o -I..\include
g++ -Wall -std=c++11 -c OrderUnitTest.cpp -o OrderUnitTest.o -I..\include -I..\include\vendors\catch

:: Compilo el Binario
g++ -Wall -std=c++11 Order.o OrderUnitTest.o -o OrderUnitTest.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
OrderUnitTest.exe