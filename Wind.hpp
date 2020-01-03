#ifndef WIND_HPP_
#define WIND_HPP_
#include "EnergyTypes.hpp"


class Wind: public EnergyTypes
{
    public:
	Wind();
	virtual string Description() const override;

};

#endif