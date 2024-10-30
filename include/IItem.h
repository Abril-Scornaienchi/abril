#ifndef _IItem_h_
#define _IItem_h_

#pragma once

#include <iostream>
#include <string>

using namespace std;

class IItem
{
    public:
        virtual string getName() = 0;
        virtual double getPrice() = 0;
};

#endif