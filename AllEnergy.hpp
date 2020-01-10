/** @file AllEnergy.hpp
 * Created by Farhene Sultana
**/

#ifndef ALL_ENERGY_H_
#define ALL_ENERGY_H_

#include <iostream>
#include <string>
#include "Coal.cpp"
#include "Hydro.cpp"
#include "NaturalGas.cpp"
#include "Nuclear.cpp"
#include "Oil.cpp"
#include "Solar.cpp"
#include "SolarThermal.cpp"
#include "Tidal.cpp"
#include "Water.cpp"
#include "Wind.cpp"

class AllEnergy 
{
    public:
        //Constructor
        AllEnergy() = default;

        /** @post given energy-type desired, this function will call that specified energy type definition **/
        void setEnergyType(std::string energy_type);
}
#endif