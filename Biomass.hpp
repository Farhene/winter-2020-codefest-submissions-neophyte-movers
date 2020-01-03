#ifndef BIOMASS_HPP_
#define BIOMASS_HPP_
#include "EnergyTypes.hpp"


class Biomass: public EnergyTypes
{
    public:
	Biomass();
	virtual string Description() const override;

};//note, biomass encapsulates a bunch of different processes

#endif