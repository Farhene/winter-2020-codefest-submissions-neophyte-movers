//  Created by Neophyte Movers' Captain, Farhene Sultana, for Hunter's Codefest 2020
/**  @file   Climate.cpp
 **/

#include <iostream>
#include "Climate.hpp"
using namespace std;
//Constructor
Climate::Climate():name_(""), type_(""), humidity_(false), temperature_(""), air_pressure_(""){}

//Paramterized Constructor
Climate::Climate(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):name_(name), 
type_(type), humidity_(humidity), temperature_(temperature), air_pressure_(air_pressure){}

/** @return name of climate 
        **/
std::string Climate::getClimateName()
{return name_;}         
        
/** @return type of the climate 
        **/
std::string Climate::getClimateType()
{return type_;}          
        
//sets humidity_ to true
void Climate::setClimateHumidity()
{ humidity_ = true;}

/** @return whether climate is humid or not 
        **/
bool Climate::getClimateHumidity()
{ return humidity_;}           
        
/** @return whether temperature is high or low usually 
        **/
std::string Climate::getClimateTemperature()
{ return temperature_;}  
        
/** @return whether air pressure is high or low 
        **/
std::string Climate::getClimateAirPressure()
{ return air_pressure_;}