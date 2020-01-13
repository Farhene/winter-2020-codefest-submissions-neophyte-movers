#include "Nuclear.hpp"
#include <iostream>

//sources: student energy
Nuclear::Nuclear()
{
	cout<<"nuclear constructor called"<<endl;
	pros[0] = "nuclear fission, can release 1 million times more energy per atom than fossil fuels";
	pros[1] = "can easily be attached on to existing energy grids";
	pros[2] = "doesn't emit greenhouse gases";
    
    cons[0] = "takes a long time for power plants to recover the large initial investment needed to build it, making it risky from a business perspective";
    cons[1] = "generates radioactive waste, which can be hazardous to human helath and can remain that way for thousands of years";
    cons[2] = "catastrophic nuclear accidents have made people more afraid of it";

}

string Nuclear::Description() const
{
    return "uses energy found within the nucleus of an atom with either fusion or fission";
}

void Nuclear::ListProsCons() const
{
	cout<<"pros: "<<endl;
	for(int i = 0; i<NUM_PROS; i++)
	{
		cout<<"- "<<pros[i]<<endl;
	}

	cout<<"cons: "<<endl;
	for(int j = 0; j<NUM_CONS; j++)
	{
		cout<<"- "<<cons[j]<<endl;
	}

}