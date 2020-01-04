#ifndef SOLAR_THERMAL_HPP_
#define SOLAR_THERMAL_HPP_

#include "Solar.hpp"
#include <string>

class SolarThermal: public Solar
{
    public:
        SolarThermal() = default;
        virtual std::string Description() const override;
};


#endif