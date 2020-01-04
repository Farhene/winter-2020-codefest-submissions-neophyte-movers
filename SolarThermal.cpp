#include "SolarThermal.hpp"
#include <iostream>
#include <string>

SolarThermal::SolarThermal()
{
    cout<<"solar thermal constructor called"<<endl;
}

std::string SolarThermal::Description() const
{
    return "Uses heat from the sun";
}