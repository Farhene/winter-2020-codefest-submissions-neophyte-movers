#include "SolarPhotovoltaic.hpp"
#include <iostream>

SolarPhotovoltaic::SolarPhotovoltaic()
{
    cout<<"solar photovoltaic constructor called"<<endl;
}

string SolarPhotovoltaic::Description() const
{
    return "Uses light from the sun";
}