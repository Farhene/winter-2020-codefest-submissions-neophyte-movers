#ifndef WIND_HPP_
#define WIND_HPP_
#include "EnergyTypes.hpp"
#include <string>


class Wind: public EnergyTypes
{
    public:
		Wind() = default;
		virtual std::string Description() const override;

};

#endif