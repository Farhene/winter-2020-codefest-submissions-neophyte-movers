#ifndef WATER_HPP_
#define WATER_HPP_
#include "EnergyTypes.hpp"


class Water: public EnergyTypes
{
    public:
	Water();
	virtual string Description() const override;

};

#endif