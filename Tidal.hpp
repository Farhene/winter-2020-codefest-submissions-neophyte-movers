#ifndef TIDAL_HPP_
#define TIDAL_HPP_

#include "EnergyTypes.hpp"

class Tidal: public EnergyTypes
{
    public:
    Tidal();
    virtual string Description() const override;
    virtual void ListProsCons() const override;

	private:
		const int NUM_PROS = 3;
		const int NUM_CONS = 2;
		string pros[NUM_PROS];
		string cons[NUM_CONS];

};


#endif