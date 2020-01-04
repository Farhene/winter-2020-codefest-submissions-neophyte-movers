#include "Tidal.hpp"
#include <iostream>
#include <string>

Tidal::Tidal()
{
    cout<<"tidal contructor called"<<endl;
}

std::string Tidal::Description() const
{
    return "Generates energy from ocean tides";
}