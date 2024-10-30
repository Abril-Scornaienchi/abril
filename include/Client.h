#ifndef _Client_h_
#define _Client_h_
#pragma once

#include <IClient.h>

using namespace std;

class Client : public IClient
{
    public:
        Client(string name);
        string getName();

    private:
        string _name;
};

#endif