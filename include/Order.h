#ifndef _Order_h_
#define _Order_h_

#pragma once

#include <vector>
#include <memory>

#include <Client.h>
#include <Employee.h>
#include <Item.h>
#include <IOrder.h>

using namespace std;

class Order : public IOrder
{
    public:
        Order(int id);
        int getId() const;
        void addClient(shared_ptr<IClient> client);
        void addEmployee(shared_ptr<IEmployee> employee);
        void addItem(shared_ptr<IItem> item);
        void showOrder();

    private:
        int _id;
        shared_ptr<IClient> _client;
        shared_ptr<IEmployee> _employee;
        vector<shared_ptr<IItem>> _items;
};

#endif