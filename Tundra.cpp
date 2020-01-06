/** @file Tundra.cpp
Created by Gabriella Alexis
Modified by Farhene Sultana
January 4, 2020 **/

#include "Tundra.hpp"
#include <iostream>
#include <string>

//parameterized constructor
Tundra::Tundra(std::string name, std::string type, bool humidity, std::string temperature, 
std::string air_pressure) : Climate(name, type, humidity, temperature, air_pressure), trees_(0),
mountains_(0), arctic_(false), antarctic_(false), alpine_(false){}

//sets humidity
void Tundra::setTundraHumidity()
{   humidity_ = true;   }

//returns humid status
bool Tundra::TundraIsHumid()
{   return humidity_;   }

/** @post sets arctic to true **/
void setArctic()
{   arctic_ = true;     }

        /** @post sets antarctic to true **/
void setAntarctic()
{   antarctic_ = true;  }

        /** @post sets alpine to true **/
void setAlpine()
{   alpine_ = true;     }

//sets trees
void Tundra::setTrees()
{   trees_ = true;  }

//return tree status
bool Tundra::hasTrees()
{   return trees_;    }

//sets mountains
void Tundra::setMountains()
{   mountains_ = true;  }

//return mountain status
bool Tundra::hasMountains()
{   return mountains_;  }



/*******************************************************************************/
/********************************* NOT DONE YET ********************************/
/*******************************************************************************/

//display info
void Tundra::display(){}
