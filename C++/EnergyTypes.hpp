#ifndef ENERGY_TYPES_HPP_
#define ENERGY_TYPES_HPP_
#include <string>
using namespace std;

class EnergyTypes
{
	public:
	virtual string Description() const = 0;
	virtual void ListProsCons() const = 0;
};

#endif