#ifndef SOLAR_HPP_
#define SOLAR_HPP_
#include "EnergyTypes.hpp"
#include <string>
using namespace std;

class Solar: public EnergyTypes
{
    public:
	Solar();
	virtual string Description() const override;
	virtual void ListProsCons() const override;

	private:
		const int NUM_PROS = 3;
		const int NUM_CONS = 1;
		string pros[NUM_PROS];
		string cons[NUM_CONS];

};

#endif