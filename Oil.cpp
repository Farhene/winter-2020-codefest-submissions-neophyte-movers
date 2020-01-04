#include "Oil.hpp"
#include <iostream>


Oil::Oil()
{
	cout<<"oil constructor called"<<endl;
}

std::string Oil::Description() const
{
    return "the process of generating energy from oil, located in reservoirs in the earth";
}