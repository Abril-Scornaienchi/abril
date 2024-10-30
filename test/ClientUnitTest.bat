:: Compilo código objeto
g++ -Wall -std=c++11 -c ..\src\Client.cpp -o Client.o -I..\include
g++ -Wall -std=c++11 -c ClientUnitTest.cpp -o ClientUnitTest.o -I..\include -I..\include\vendors\catch

:: Compilo el Binario
g++ -Wall -std=c++11 Client.o ClientUnitTest.o -o ClientUnitTest.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
ClientUnitTest.exe