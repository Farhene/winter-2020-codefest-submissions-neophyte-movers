#ifndef NUCLEAR_HPP_
#define NUCLEAR_HPP_
#include "EnergyTypes.hpp"


class Nuclear: public EnergyTypes
{
    public:
	Nuclear();
	virtual string Description() const override;

};

#endif