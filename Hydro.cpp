#include "Hydro.hpp"
#include <iostream>

Hydro::Hydro()
{
    cout<<"hydro contructor called"<<endl;
}

std::string Hydro::Description() const
{
    return "Uses the flow of water to spin a turbine to generate electricity\nit's what's used in dams";
}