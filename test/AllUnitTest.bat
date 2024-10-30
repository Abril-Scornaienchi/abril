:: Compilo código objeto
g++ -Wall -std=c++11 -c ..\src\Client.cpp -o Client.o -I..\include
g++ -Wall -std=c++11 -c ..\src\Employee.cpp -o Employee.o -I..\include
g++ -Wall -std=c++11 -c ..\src\Item.cpp -o Item.o -I..\include
g++ -Wall -std=c++11 -c ..\src\Order.cpp -o Order.o -I..\include
g++ -Wall -std=c++11 -c AllUnitTest.cpp -o AllUnitTest.o -I..\include -I..\include\vendors\catch

:: Compilo el Binario
g++ -Wall -std=c++11 Client.o Employee.o Item.o Order.o AllUnitTest.o -o AllUnitTest.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
AllUnitTest.exe