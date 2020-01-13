#include "Tidal.hpp"
#include <iostream>

//source
Tidal::Tidal()
{
    cout<<"tidal contructor called"<<endl;
 
    pros[0] = "easy to install";
    pros[1] = "renewable";
    pros[2] = "because tidal patterns are well-known, tidal power is very predicatable";

    cons[0] = "can only be installed at coastlines, and only in areas where the high tide and low tide are wide enough apart";
    cons[1] = "tide cycles aren't consistent with human consumption of electiricty, meaning it can't keep up with the demand by itself";
}

string Tidal::Description() const
{
    return "Uses ocean tides to turn turbines to generate electiricty";
}


void Tidal::ListProsCons() const
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