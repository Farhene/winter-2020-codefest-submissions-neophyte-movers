#ifndef NUCLEAR_HPP_
#define NUCLEAR_HPP_
#include "EnergyTypes.hpp"


class Nuclear: public EnergyTypes
{
    public:
	Nuclear();
	virtual string Description() const override;
	virtual void ListProsCons() const override;

	private:
		const int NUM_PROS = 3;
		const int NUM_CONS = 3;
		string pros[NUM_PROS];
		string cons[NUM_CONS];
};

#endif