#include "NaturalGas.hpp"
#include <iostream>


NaturalGas::NaturalGas()
{
	cout<<"natural gas constructor called"<<endl;
}

string NaturalGas::Description() const
{
    return "extracting reservoirs of gas, mostly methane, deep in the earth";
}