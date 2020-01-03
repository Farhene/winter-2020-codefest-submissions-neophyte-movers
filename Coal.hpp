#ifndef COAL_HPP_
#define COAL_HPP_
#include "EnergyTypes.hpp"


class Coal: public EnergyTypes
{
    public:
	Coal();
	virtual string Description() const override;

};

#endif