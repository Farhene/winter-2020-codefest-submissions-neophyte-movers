#ifndef NUCLEAR_FISS_HPP_
#define NUCLEAR_FISS_HPP_

#include "Nuclear.hpp"

class NuclearFission: public Nuclear
{
    public:
    NuclearFission();
    virtual string Description() const override;
};


#endif