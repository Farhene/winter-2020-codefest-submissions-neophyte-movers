#ifndef SOLAR_THERMAL_HPP_
#define SOLAR_THERMAL_HPP_

#include "EnergyTypes.hpp"

class SolarThermal: public EnergyTypes
{
    public:
    SolarThermal();
    virtual string Description() const override;
	virtual string ListProsCons() const override;

	private:
		const int NUM_PROS = 4;
		const int NUM_CONS = 3;
		string pros[NUM_PROS];
		string cons[NUM_CONS];
};


#endif