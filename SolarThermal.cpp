#include "SolarThermal.hpp"
#include <iostream>


//sources: student energy
SolarThermal::SolarThermal()
{
    cout<<"solar thermal constructor called"<<endl;
    pros[0] = "Although it won't be much, you can harvest solar thermal energy with simple but clever methods. Such as a greenhouse.";
	pros[1] = "has a huge scale of energy collection, like from commercial uses, to just a single house";
	pros[2] = "the sun is a renewable energy source";
	pros[3] = "uses simple technology, so it's easier to maintain";

    cons[0] = "beacuse the sun's rays aren't concentrated, this method requires a large area in order to collect a good amount of energy";
	cons[1] = "beacause the ideal place for solar thermal collection is in deserts, it's more costly to transport that energy";
	cons[2] = "sunlight is dependent on many factors, such as time of day, season, causing issues with consistency";

}
string SolarThermal::Description() const
{
    return "Captures heat from the sun to create steam, which powers turbines to makes";
}

string SolarThermal::ListProsCons() const
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