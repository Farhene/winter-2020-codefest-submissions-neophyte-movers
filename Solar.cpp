#include "Solar.hpp"
#include <iostream>
#include <string>
using namespace std;

//sources: student energy
Solar::Solar()
{
	cout<<"default constructor called";
	pros[0] = "doesn't emit greenhouse gases";
	pros[1] = "solar energy is the most abundant renewable resource that can theoretically meet the earth's fossil fuel demands";
	pros[2] = "has a huge scale of energy collection, like from commercial uses, to just on the roof of your house";


	cons[0]= "sunlight is dependent on many factors, such as time of day, season, causing issues with consistency";
}

string Solar::Description() const
{
    return "relies on energy from the sun";
}

string Solar::ListProsCons() const
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