/*tropical CPP file created by Gabriella Gonzalez
inherits from the class Climate
Modified by Farhene Sultana
let me know if this is an okay class for tropical 
and if i need to add anything else
*/
#include "Tropical.hpp"
#include <string>
#include <iostream>

//Paramterized Constructor
Tropical::Tropical(std::string name, std::string type, bool humidity, std::string temperature, 
std::string air_pressure) : Climate(name, type, humidity,temperature, air_pressure),
tropical_humid_(false), trees_(false), rain_(false){}

/** @post sets tropical humid to true **/
void Tropical::setTropicalHumidity()
{	tropical_humid_ = true;	} 

/** @post sets trees to true **/
void Tropical::setTrees()
{	trees_ = true;	}

/** @post sets rain to true**/
void Tropical::setTropicalRain()
{	rain_ = true;	}

/** @returns true if tropical humid **/
bool Tropical::isHumid()
{	return tropical_humid_;	}

/** @returns true if has trees **/
bool Tropical::hasTrees()
{	return trees_;	}

/** @returns true if has rain **/
bool Tropical::hasRain()
{	return rain_;	}


/******************************************************/
/****************** NOT DONE YET **********************/
/******************************************************/

void Tropical::display();