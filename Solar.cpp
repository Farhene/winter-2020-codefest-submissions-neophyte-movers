#include "Solar.hpp"
#include <iostream>
#include <string>
using namespace std;

Solar::Solar()
{
	cout<<"default constructor called";
}

string Solar::Description() const
{
    return "relies on energy from the sun";
}