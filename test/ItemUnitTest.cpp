#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Item.h>
#include <iostream>
#include <memory>
#include <catch.h>

using namespace std;
 
TEST_CASE( "Correct getName from Item", "[getName method]" )
{
    // Arrange
    auto item_1 = make_shared<Item>("Fragrance", 19.99);
    
    // Act
    string itemName = item_1 -> getName();
    
    // Assert
    REQUIRE( itemName == "Fragrance" );
}