/** @file Mild.cpp
 * Created by Farhene Sultana
**/

#include "Mild.hpp"
#include <string>
#include <iostream>

//paramterized constructor
Mild::Mild(std::string name, std::string type, bool humidity, std::string temperature, 
std::string air_pressure): Climate(name, type, humidity, temperature, air_pressure), 
mild_winter_(false), hot_dry_summer_(false), nocturnal_animals_(false){}

        /** @post sets mild_winter to true **/
void Mild::setMildWinter()
{   mild_winter_ = true;    }

        /** @post sets hot_dry_summer to true **/
void Mild::setHotDrySummer()
{   hot_dry_summmer_ = true;    }

        /** @post sets nocturnal animals to true **/
void Mild::setNocturnalAnimals()
{   nocturnal_animals_ = true;  }

        /** @returns true if mild winter **/
bool Mild::hasMildWinter()
{   return mild_winter_;    }

        /** @return true if hot and dry summer **/
bool Mild::hasHotDrySummer()
{   return hot_dry_summer_; }

        /** @return true if has nocturnal animals **/
bool Mild::hasNocturnalAnimals()
{   return nocturnal_animals_;}


/*******************************************************************************/
/********************************* NOT DONE YET ********************************/
/*******************************************************************************/
         /*display info*/
virtual void Mild::display() override;
