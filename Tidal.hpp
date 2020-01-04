#ifndef TIDAL_HPP_
#define TIDAL_HPP_

#include "Water.hpp"
#include <string>

class Tidal: public Water
{
    public:
        Tidal() = default;
        virtual std::string Description() const override;
};


#endif