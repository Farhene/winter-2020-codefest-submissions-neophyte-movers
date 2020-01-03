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

};

#endif