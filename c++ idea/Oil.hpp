#ifndef OIL_HPP_
#define OIL_HPP_
#include "EnergyTypes.hpp"


class Oil: public EnergyTypes
{
    public:
	Oil();
	virtual string Description() const override;
	virtual void ListProsCons() const override;

	private:
		static const int NUM_PROS = 1;
		static const int NUM_CONS = 4;
		string pros[NUM_PROS];
		string cons[NUM_CONS];
};
#endif