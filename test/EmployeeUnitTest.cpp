#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Employee.h>
#include <iostream>
#include <memory>
#include <catch.h>

using namespace std;
 
TEST_CASE( "Correct getName from Employee", "[getName method]" )
{
    // Arrange
    auto employee_1 = make_shared<Employee>("Jhon");
    
    // Act
    string employeeName = employee_1 -> getName();
    
    // Assert
    REQUIRE( employeeName == "Jhon" );
}