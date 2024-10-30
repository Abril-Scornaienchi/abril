#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Client.h>
#include <iostream>
#include <memory>
#include <catch.h>

using namespace std;
 
TEST_CASE( "Correct getName from Client", "[getName method]" )
{
    // Arrange
    auto client_1 = make_shared<Client>("Carl");
    
    // Act
    string clientName = client_1 -> getName();
    
    // Assert
    REQUIRE( clientName == "Carl" );
}