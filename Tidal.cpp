#include "Tidal.hpp"
#include <iostream>

Tidal::Tidal()
{
    cout<<"tidal contructor called"<<endl;
}

string Tidal::Description() const
{
    return "Generates energy from ocean tides";
}