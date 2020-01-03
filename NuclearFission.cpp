#include "NuclearFission.hpp"
#include <iostream>

NuclearFission::NuclearFission()
{
    cout<<"nuclear fission contructor called"<<endl;
}

string NuclearFission::Description() const
{
    return "Generates energy from splitting atoms";
}