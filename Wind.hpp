#ifndef WIND_HPP_
#define WIND_HPP_
#include "EnergyTypes.hpp"


class Wind: public EnergyTypes
{
    public:
	Wind();
	virtual string Description() const override;
    virtual void ListProsCons() const override;

	private:
		static const int NUM_PROS = 1;
		static const int NUM_CONS = 2;
		string pros[NUM_PROS];
		string cons[NUM_CONS];


};

#endif