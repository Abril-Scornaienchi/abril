#ifndef _IClient_h_
#define _IClient_h_

#pragma once

#include <iostream>
#include <string>

using namespace std;

class IClient
{
    public:
        virtual string getName() = 0;
};

#endif