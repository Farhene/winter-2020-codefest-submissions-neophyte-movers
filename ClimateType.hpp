/** @file ClimateType.hpp
 * Created by Farhene Sultana
**/

#ifndef CLIMATE_TYPE_H_
#define CLIMATE_TYPE_H_

#include "Arid.cpp"
#include "Mild.cpp"
#include "Polar.cpp"
#include "Temperate.cpp"
#include "Tropical.cpp"
#include "Tundra.cpp"

class ClimateType
{
    public:
        //Constructor
        ClimateType() = default;
        
        /** @post sets the type of climate the user has selected to this class **/
        void setClimateType(std::string climate_type);
}
#endif