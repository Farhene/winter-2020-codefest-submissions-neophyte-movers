#include "Oil.hpp"
#include <iostream>


Oil::Oil()
{
	cout<<"oil constructor called"<<endl;
	pros[0] = "it provides many different types of transportation fuel and plastics";

	cons[0] = "control over oil has been a source of conflict around the world";
	cons[1] = "there's a finite source of oil, at least at the pace we consume it, meaning it'll eventually run out";
	cons[2] = "the process of extracting causes land disturbances";
	cons[3] = "emits greenhouse gases";
}

string Oil::Description() const
{
    return "the process of generating energy from oil, located in reservoirs in the earth";
}

string Oil::ListProsCons() const
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