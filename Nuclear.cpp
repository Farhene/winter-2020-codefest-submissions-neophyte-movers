#include "Nuclear.hpp"
#include <iostream>


Nuclear::Nuclear()
{
	cout<<"nuclear constructor called"<<endl;
}

std::string Nuclear::Description() const
{
    return "uses energy found within the nucleus of an atom with either fusion or fission";
}