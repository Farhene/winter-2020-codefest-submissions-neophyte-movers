#ifndef NUCLEAR_FUS_HPP_
#define NUCLEAR_FUS_HPP_

#include "Nuclear.hpp"

class NuclearFusion: public Nuclear
{
    public:
    NuclearFusion();
    virtual string Description() const override;
};


#endif