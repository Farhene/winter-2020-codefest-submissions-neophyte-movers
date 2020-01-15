/** @file ClimateType.cpp
 * Created by Farhene Sultana
**/

#include "ClimateType.hpp"
#include <iostream>
#include <string>

void ClimateType::setClimateType(std::string climate_type){
    if(climate_type == "Arid")
    {
        Arid arid;
        std::cout << arid.display() << std::endl;
    }
    else if(climate_type == "Mild")
    {
        Mild mild;
        std::cout << mild.display() << std::endl;
    }
    else if(climate_type == "Polar")
    {
        Polar polar;
        std::cout << polar.display() << std::endl;
    }
    else if(climate_type == "Temperate")
    {
        Temperate temperate;
        std::cout << temperate.display() << std::endl;
    }
    else if(climate_type == "Tropical")
    {
        Tropical tropical;
        std::cout << tropical.display() << std::endl;
    }
    else if(climate_type == "Tundra")
    {
        Tundra tundra;
        std::cout << tundra.display() << std::endl;
    }
}