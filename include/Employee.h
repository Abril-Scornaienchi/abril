#ifndef _Employee_h_
#define _Employee_h_
#pragma once

#include <IEmployee.h>

using namespace std;

class Employee : public IEmployee
{
    public:
        Employee(string name);
        string getName();

    private:
        string _name;
};

#endif