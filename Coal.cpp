#include "Coal.hpp"
#include <iostream>


Coal::Coal()
{
	cout<<"coal constructor called"<<endl;
}

string Coal::Description() const
{
    return "the process of generating energy from dark black rocks that are mined";
}