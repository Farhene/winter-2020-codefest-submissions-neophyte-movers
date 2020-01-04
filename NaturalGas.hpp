#ifndef NATGAS_HPP_
#define NATGAS_HPP_
#include "EnergyTypes.hpp"


class NaturalGas: public EnergyTypes
{
    public:
		NaturalGas() = default;
		virtual std::string Description() const override;

};

#endif