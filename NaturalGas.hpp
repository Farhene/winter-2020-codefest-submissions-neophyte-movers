#ifndef NATGAS_HPP_
#define NATGAS_HPP_
#include "EnergyTypes.hpp"


class NaturalGas: public EnergyTypes
{
    public:
	NaturalGas();
	virtual string Description() const override;

};

#endif