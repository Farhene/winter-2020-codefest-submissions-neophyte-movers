#include "NaturalGas.hpp"
#include <iostream>


NaturalGas::NaturalGas()
{
	cout<<"natural gas constructor called"<<endl;
	pros[0] = "When natural gas is burned, it has fewer emissions than other fossil fuels";

    cons[0] = "During extraction, some methan can leak into the air, not only contributing to climate change but also endangering those nearby";

}

string NaturalGas::Description() const
{
    return "extracting reservoirs of gas, mostly methane, deep in the earth";
}

string NaturalGas::ListProsCons() const
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

