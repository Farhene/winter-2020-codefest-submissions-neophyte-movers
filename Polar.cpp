/** @file Polar.cpp
 * Created by Farhene Sultana
**/

#include "Polar.hpp"
#include <string>
#include <iostream>

//Paramterized Constructor
Polar::Polar(std::string name, std::string type, bool humidity, std::string temperature, 
std::string air_pressure): Climate(name, type, humidity, temperature, air_pressure), dry_(false),
cold_(false), plant_life_(false), snow_(false){}

/** @post sets dry_ to true **/
void Polar::setDry()
{   dry_ = true;    }

        /** @post sets cold_ to true **/
void Polar::setCold()
{   cold_ = true;   }

        /** @post sets plant-life to true**/
void Polar::setPlantLife()
{   plant_life_ = true; }

        /** @post sets snow to true**/
void Polar::setSnow()
{   snow_ = true;   }

        /** @returns true if dry**/
bool Polar::isDry()
{   return dry_;    }

        /** @returns true if cold **/
bool Polar::isCold()
{   return cold_;   }

        /** @returns true if has plant life **/
bool Polar::hasPlant_Life()
{   return plant_life_; }

        /** @returns true if there is snow **/
bool Polar::hasSnow()
{   return snow_;   }


/*******************************************************************************/
/********************************* NOT DONE YET ********************************/
/*******************************************************************************/

        /*display info*/
virtual void Polar::display() override;