#include <Item.h>


Item :: Item(string name, double price)
{
    _name = name;
    _price = price;
}

string Item :: getName()
{
    return _name;
}

double Item :: getPrice()
{
    return _price;
}