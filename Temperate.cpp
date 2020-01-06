/** @file Temperate.cpp
 * Created by Farhene Sultana
**/

#include "Temperate.hpp"
#include <string>
#include <iostream>

//parameterized constructor
Temperate::Temperate(std::string name, std::string type, bool humidity, std::string temperature, 
std::string air_pressure): Climate(name, type, humidity, temperature, air_pressure), 
plant_life_(false), cold_winter_(false), mild_summer_(false){}

        /** @post sets plant_life_ to true **/
void Temperate::setPlantLife()
{   plant_life_ = true; }

        /** @post sets cold_winter_ to true **/
void Temperate::setColdWinter()
{   cold_winter_ = true;    }

        /** @post sets mild_summer_ to true **/
void Temperate::setMildSummer()
{   mild_summer_ = true;    }

        /** @returns true if plant_life_ **/
bool Temperate::hasPlantLife()
{   return plant_life_; }

        /** @returns true if cold_winter_ **/
bool Temperate::hasColdWinters()
{   return cold_winter_;    }

        /** @returns true if mild_summer_ **/
bool Temperate::hasMildSummers()
{   return mild_summer_;    }


/*******************************************************************************/
/********************************* NOT DONE YET ********************************/
/*******************************************************************************/
          /*display info**/
virtual void Temperate::display() override;