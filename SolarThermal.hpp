#ifndef SOLAR_THERMAL_HPP_
#define SOLAR_THERMAL_HPP_

#include "Solar.hpp"

class SolarThermal: public Solar
{
    public:
    SolarThermal();
    virtual string Description() const override;
};


#endif