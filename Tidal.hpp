#ifndef TIDAL_HPP_
#define TIDAL_HPP_

#include "Water.hpp"

class Tidal: public Water
{
    public:
    Tidal();
    virtual string Description() const override;
};


#endif