#include "Water.hpp"
#include <iostream>
#include <string>


Water::Water()
{
	cout<<"water constructor called"<<endl;
}

std::string Water::Description() const
{
    return "uses energy transferred by moving water";
}