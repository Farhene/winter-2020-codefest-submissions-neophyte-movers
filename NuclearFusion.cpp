#include "NuclearFusion.hpp"
#include <iostream>

NuclearFusion::NuclearFusion()
{
    cout<<"nuclear fusion contructor called"<<endl;
}

string NuclearFusion::Description() const
{
    return "Generates energy from nuclei colliding";
}