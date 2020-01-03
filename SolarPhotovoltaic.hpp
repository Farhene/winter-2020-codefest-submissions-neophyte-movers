#ifndef SOLAR_PHOTO_HPP_
#define SOLAR_PHOTO_HPP_

#include "Solar.hpp"

class SolarPhotovoltaic: public Solar
{
    public:
    SolarPhotovoltaic();
    virtual string Description() const override;
};


#endif