#ifndef NATGAS_HPP_
#define NATGAS_HPP_
#include "EnergyTypes.hpp"


class NaturalGas: public EnergyTypes
{
    public:
	NaturalGas();
	virtual string Description() const override;
	virtual void ListProsCons() const override;

	private:
		static const int NUM_PROS = 1;
		static const int NUM_CONS = 1;
		string pros[NUM_PROS];
		string cons[NUM_CONS];

};

#endif