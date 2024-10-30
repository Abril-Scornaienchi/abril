#ifndef _Item_h_
#define _Item_h_

#pragma once

#include <IItem.h>

using namespace std;

class Item : public IItem
{
    public:
        Item(string name, double price);

        string getName();
        double getPrice();

    private:
        string _name;
        double _price;
};

#endif