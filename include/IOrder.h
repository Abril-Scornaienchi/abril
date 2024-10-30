#ifndef _IOrder_h_
#define _IOrder_h_

#pragma once

#include <iostream>
#include <string>

using namespace std;

class IOrder
{
    public:
        virtual int getId() const = 0;
        virtual void addClient(shared_ptr<IClient> client) = 0;
        virtual void addEmployee(shared_ptr<IEmployee> employee) = 0;
        virtual void addItem(shared_ptr<IItem> item) = 0;
        virtual void showOrder() = 0;
};

#endif