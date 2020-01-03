#include "SolarThermal.hpp"
#include <iostream>

SolarThermal::SolarThermal()
{
    cout<<"solar thermal constructor called"<<endl;
}

string SolarThermal::Description() const
{
    return "Uses heat from the sun";
}