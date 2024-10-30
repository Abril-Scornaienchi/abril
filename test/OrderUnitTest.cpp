#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Order.h>
#include <iostream>
#include <memory>
#include <catch.h>

using namespace std;
 
TEST_CASE( "Correct getId from Order", "[getId method]" )
{
    // Arrange
    auto order_1 = make_shared<Order>(1);
    
    // Act
    int order_client = order_1 -> getId();
    
    // Assert
    REQUIRE( order_client == 1 );
}