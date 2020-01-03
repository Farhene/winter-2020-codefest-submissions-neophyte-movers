#include "Water.hpp"
#include <iostream>


Water::Water()
{
	cout<<"water constructor called"<<endl;
}

string Water::Description() const
{
    return "uses energy transferred by moving water";
}