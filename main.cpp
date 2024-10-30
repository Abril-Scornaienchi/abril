#include <iostream>
#include <conio.h>

#include <vector>
#include <memory>

#include <Client.h>
#include <Employee.h>
#include <Item.h>
#include <Order.h>

using namespace std;

int main()
{
    system("cls");

    // Create Items
    auto item_1 = make_shared<Item>("Fragrance", 19.99);
    auto item_2 = make_shared<Item>("Make-up", 14.99);

    // Create Client
    auto client_1 = make_shared<Client>("Carl");

    // Create Employee
    auto employee_1 = make_shared<Employee>("Jhon");

    // Create Order
    auto order_1 = make_shared<Order>(1);

    order_1 -> addClient(client_1);
    order_1 -> addEmployee(employee_1);
    order_1 -> addItem (item_1);
    order_1 -> addItem (item_2);
    order_1 -> showOrder ();

}
