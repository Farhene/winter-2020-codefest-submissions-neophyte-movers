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


          /*display info**/
void Temperate::display()
{
    std::cout << "Temperate regions tend to have a lot more plant-life.\n These regions have cold winters and mild summers.\n Madrid in Spain is an example of a temperate climate." << std::endl;
    std::cout << "Please type 'Summer' or 'Winter' to see an example of Temperate during the Summer or Winter";
        std::string result = "";
        std::cin >> result;
        while(result != "Summer" && result != "summer" && result != "Winter" && result != "winter")
        {
                std::cout << "Please type either 'Summer' or 'Winter'.";
        }
        if(result == "Summer" || result == "summer")
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Temperate SUMMER climate:\nhttps://us.123rf.com/450wm/dariuszl/dariuszl1708/dariuszl170800002/84395170-summer-pinewood-with-bilberry-plants-growing-in-forest-understory-scots-or-scotch-pine-pinus-sylvest.jpg?ver=6" << std::endl;
                std::cout << "And here is the WINTER link!\nhttp://www.bu.edu/files/2017/03/maple-trees-800x534-iStock-468578676.jpg" << std::endl;
        }
        else
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Temperate WINTER climate:\nhttp://www.bu.edu/files/2017/03/maple-trees-800x534-iStock-468578676.jpg" << std::endl;
                std::cout << "And here is the SUMMER link!\nhttps://us.123rf.com/450wm/dariuszl/dariuszl1708/dariuszl170800002/84395170-summer-pinewood-with-bilberry-plants-growing-in-forest-understory-scots-or-scotch-pine-pinus-sylvest.jpg?ver=6" << std::endl;
        } 
}