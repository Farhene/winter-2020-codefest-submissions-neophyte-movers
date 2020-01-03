#include "Geothermal.hpp"
#include <iostream>


Geothermal::Geothermal()
{
	cout<<"geothermal constructor called"<<endl;
}

string Geothermal::Description() const
{
    return "Puts water down a tube deep in the earth, the heat of the earth makes it steam,\nwhich generates electricity";
}