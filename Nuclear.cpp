#include "Nuclear.hpp"
#include <iostream>


Nuclear::Nuclear()
{
	cout<<"nuclear constructor called"<<endl;
}

string Nuclear::Description() const
{
    return "uses energy found within the nucleus of an atom with either fusion or fission";
}