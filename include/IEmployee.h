#ifndef _IEmployee_h_
#define _IEmployee_h_

#pragma once

#include <iostream>
#include <string>

using namespace std;

class IEmployee
{
    public:
        virtual string getName() = 0;
};

#endif