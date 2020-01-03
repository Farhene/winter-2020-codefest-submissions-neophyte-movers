#ifndef GEO_HPP_
#define GEO_HPP_
#include "EnergyTypes.hpp"


class Geothermal: public EnergyTypes
{
    public:
	Geothermal();
	virtual string Description() const override;

};

#endif