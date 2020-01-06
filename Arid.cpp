/** @file Arid.cpp
 * Created by Farhene Sultana
**/

#include "Arid.hpp"
#include <string>
#include <iostream>

//parameterized constructor
Arid::Arid(std::string name, std::string type, bool humidity, std::string temperature, 
std::string air_pressure): Climate(name, type, humidity, temperature, air_pressure), hot_(false),
dry_(false), desert_(false){}

        /** @post sets hot to true **/
void Arid::setHot()
{   hot_ = true;    }

        /** @post sets dry to true **/
void Arid::setDry()
{   dry_ = true;    }

        /** @post sets desert_ to true**/
void Arid::setDesert()
{   desert_ = true; }

        /** @returns true if hot **/
bool Arid::isHot()
{   return hot_;    }

        /** @returns true if dry **/
bool Arid::isDry()
{   return dry_;    }

        /** @returns true if desert_ **/
bool Arid::hasDesert()
{   return desert_; }

/*******************************************************************************/
/********************************* NOT DONE YET ********************************/
/*******************************************************************************/
         /*display info*/
void Arid::display(){}
