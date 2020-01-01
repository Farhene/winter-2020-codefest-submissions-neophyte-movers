/*tropical CPP file created by Gabriella Gonzalez
inherits from the class Climate
let me know if this is an okay class for tropical 
and if i need to add anything else
*/
#include "Climate.hpp"
#include "Tropical.hpp"
#include <string>
#include <iostream>

Tropical::Tropical():name_(""), type_(""), humidity_(false), temperature_(""), air_pressure_(""){}

Tropical::Tropical(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure),TropicalHumid_(false),Trees_(0),Species_(0),Rain_(false){}

void Tropical::setTropicalHumidity(){
	TropicalHumid_ = true;
} 

bool Tropical::TropicalIsHumid(){
	return TropicalHumid_;
}

void Tropical::setTropicalTrees(int numberOfTropicalTrees){
	Trees_ = numberOfTropicalTrees;
}

int Tropical::numberOfTropicalTrees(){
	return Trees_;
}

void Tropical::setTropicalRain(){
	Rain_ = true;
}

bool Tropical::hasRain(){
	return Rain_;
}

void Tropical::setNumberOfSpecies(int NumberOfSpecies){
	Species_ = NumberOfSpecies;
}

int Tropical::NumberOfSpecies(){
	return Species_;
}