/** @file AllEnergy.cpp
 * Created by Farhene Sultana
**/

#include "AllEnergy.hpp"
#include <iostream>
#include <string>

void AllEnergy::setEnergyType(std::string energy_type)
{
    if(energy_type == "Coal")
    {
        Coal coal;
        std::cout << coal.Description() << std::endl;
    }
    else if(energy_type == "Hydro")
    {
        Hydro hydro;
        std::cout << hydro.Description() << std::endl;
    }
    else if(energy_type == "NaturalGas")
    {
        NaturalGas natural_gas;
        std::cout << natural_gas.Description() << std::endl;
    }
    else if(energy_type == "Nuclear")
    {
        Nuclear nuclear;
        std::cout << nuclear.Description() << std::endl;
    }
    else if(energy_type == "Oil")
    {
        Oil oil;
        std::cout << oil.Description() << std::endl;
    }
    else if(energy_type == "Solar")
    {
        Solar solar;
        std::cout << solar.Description() << std::endl;
    }
    else if(energy_type == "SolarThermal")
    {
        SolarThermal solar_thermal;
        std::cout << solar_thermal.Description() << std::endl;
    }
    else if(energy_type == "Tidal")
    {
        Tidal tidal;
        std::cout << tidal.Description() << std::endl;
    }
    else if(energy_type == "Water")
    {
        Water water;
        std::cout << water.Description() << std::endl;
    }
    else if(energy_type == "Wind")
    {
        Wind wind;
        std::cout << wind.Description() << std::endl;
    }
}
//End of file