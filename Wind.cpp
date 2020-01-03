#include "Wind.hpp"
#include <iostream>


Wind::Wind()
{
	cout<<"wind constructor called"<<endl;
}

string Wind::Description() const
{
    return "uses wind motion to spin turbines to make electricity";
}