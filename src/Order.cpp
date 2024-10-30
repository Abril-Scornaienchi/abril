#include <Order.h>


Order :: Order(int id)
{
    _id = id;
}

int Order :: getId() const
{
    return _id;
}

void Order :: addClient(shared_ptr<IClient> client)
{
    _client = client;
}

void Order :: addEmployee(shared_ptr<IEmployee> employee)
{
    _employee = employee;
}

void Order :: addItem(shared_ptr<IItem> item)
{
    _items.push_back(item);
}

void Order :: showOrder()
{
    cout << "\nOrder " << this -> getId() << " for client " << _client -> getName() << " was assigned to employee " << _employee -> getName() << ":\n";
    
    for (const auto& item : _items)
    {
        cout << " - " << item -> getName() << " $" << item -> getPrice() << "\n";
    }
    
}
