#include "Biomass.hpp"
#include <iostream>


Biomass::Biomass()
{
	cout<<"biomass constructor called"<<endl;
}

string Biomass::Description() const
{
    return "multiple processes of generating energy from organic material";
}