#ifndef WATER_HPP_
#define WATER_HPP_
#include "EnergyTypes.hpp"
#include <string>


class Water: public EnergyTypes
{
    public:
		Water() = default;
		virtual std::string Description() const override;

};

#endif