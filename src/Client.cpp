#include <Client.h>


Client :: Client(string name)
{
    _name = name; 
}


string Client :: getName()
{
    return _name;
}
