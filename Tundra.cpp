/** @file Tundra.cpp
Created by Gabriella Alexis
January 4, 2020 **/

#include "Tundra.hpp"
#include <iostream>
#include <string>

//constructor with initialized values
Tundra::Tundra():trees_(0), species_(0), mountains_(0), humidity_(0);
//parameterized constructor
Tundra::Tundra(std::string name, std::string type, bool humidity, 
        std::string temperature, std::string air_pressure):
        Climate(name, type, humidity, temperature, air_pressure), trees_(0), species_(0), mountains_(0);
//sets humidity
void Tundra::setTundraHumidity(){
    humidity_ = false;
}
//returns humid status
bool Tundra::TundraIsHumid(){
    return humidity_;
}
//set tundra climate types
void Tundra::setTundraTypes(){}
//sets trees
void Tundra::setTrees(){
    trees_ = true;
}
//return tree status
bool Tundra::hasTrees(){
   return trees_;
}
//sets mountains
void Tundra::setMountains(){
    mountains_ = true;
}
//return mountain status
bool Tundra::hasMountains(){
    return mountains_;
}
//set number of species
void Tundra::setNumberOfSpecies(int number_of_species){}
//return number of species
int Tundra::numberOfSpecies(){}
//display info
void Tundra::display(){}
