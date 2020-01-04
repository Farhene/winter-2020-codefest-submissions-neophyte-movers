#include "Wind.hpp"
#include <iostream>
#include <string>


Wind::Wind()
{
	cout<<"wind constructor called"<<endl;
}

std::string Wind::Description() const
{
    return "uses wind motion to spin turbines to make electricity";
}