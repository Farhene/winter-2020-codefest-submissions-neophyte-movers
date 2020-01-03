#ifndef OIL_HPP_
#define OIL_HPP_
#include "EnergyTypes.hpp"


class Oil: public EnergyTypes
{
    public:
	Oil();
	virtual string Description() const override;

};//note, there are many different types of oil

#endif