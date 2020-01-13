#include "Hydro.hpp"
#include <iostream>

//note, sources of info for this is from studentenergy and energy.gov
Hydro::Hydro()//instantiates Hydro and fills pros and cons
{
    cout<<"hydro contructor called"<<endl; //test cout
    pros[0] = "It's a clean fuel source, so the process of generating electricity doesn't pollute";
    pros[1] = "Because hydro-power relies on the water cycle, which is driven by the sun, it is a reliable form of energy";
    pros[2] = "There are a number of additional benefits that hydro-power brings, such as flood control and irrigation";

    cons[0] = "Building dams can drastically change the local habitat";
    cons[1] = "Dams bursting can create catastrophic floods";
    cons[2] = "Building a dam creates a large reservoir, which drowns some local plants, the decaying of these local plants at the bottom of the reservoir, these decaying plants create methane";
}


string Hydro::Description() const
{
    return "Uses the flow of water to spin a turbine to generate electricity\nit's what's used in dams";
}

string Hydro::ListProsCons() const
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

