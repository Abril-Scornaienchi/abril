:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include -c .\src\Client.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Employee.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Item.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Order.cpp
g++ -Wall -std=c++11 -I.\include -c main.cpp 

:: Compilo el Binario
g++ -I.\include Client.o Employee.o Item.o Order.o main.o -o main.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
main.exe
