:: Compilo código objeto
g++ -Wall -std=c++11 -c ..\src\Item.cpp -o Item.o -I..\include
g++ -Wall -std=c++11 -c ItemUnitTest.cpp -o ItemUnitTest.o -I..\include -I..\include\vendors\catch

:: Compilo el Binario
g++ -Wall -std=c++11 Item.o ItemUnitTest.o -o ItemUnitTest.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
ItemUnitTest.exe