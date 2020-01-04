#ifndef ENERGY_TYPES_HPP_
#define ENERGY_TYPES_HPP_
#include <string>
using namespace std;

class EnergyTypes
{
	public:
		EnergyTypes() = default;
		virtual std::string Description() const = 0;
	
};

#endif