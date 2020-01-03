#ifndef HYDRO_HPP_
#define HYDRO_HPP_

#include "Water.hpp"

class Hydro: public Water
{
    public:
    Hydro();
    virtual string Description() const override;
};


#endif