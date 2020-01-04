#ifndef HYDRO_HPP_
#define HYDRO_HPP_

#include "Water.hpp"

class Hydro: public Water
{
    public:
        Hydro() = default;
        virtual std::string Description() const override;
};


#endif