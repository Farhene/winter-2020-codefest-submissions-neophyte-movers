#ifndef NUCLEAR_HPP_
#define NUCLEAR_HPP_
#include "EnergyTypes.hpp"


class Nuclear: public EnergyTypes
{
    public:
		Nuclear() = default;
		virtual std::string Description() const override;

};

#endif