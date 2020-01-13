#include "Wind.hpp"
#include <iostream>


Wind::Wind()
{
	cout<<"wind constructor called"<<endl;
	pros[0] = "no direct cO2 emissions";

	cons[0] = "wind is not consistent";
	cons[1] = "the large turbines can dirupt birds";
}

string Wind::Description() const
{
    return "uses wind motion to spin turbines to make electricity";
}


void Wind::ListProsCons() const
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