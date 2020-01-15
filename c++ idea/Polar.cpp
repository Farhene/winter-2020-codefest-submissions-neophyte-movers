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


        /*display info*/
void Polar::display()
{
   std::cout << "Polar climates have a lot of snow! It is very cold and dry.\nThere may be signs of plant-life, but barely any.\nAn example of a Polar climate would be Antarctica" << std::endl;
   std::cout << "Please type 'Summer' or 'Winter' to see an example of Polar during the Summer or Winter";
        std::string result = "";
        std::cin >> result;
        while(result != "Summer" && result != "summer" && result != "Winter" && result != "winter")
        {
                std::cout << "Please type either 'Summer' or 'Winter'.";
        }
        if(result == "Summer" || result == "summer")
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Polar SUMMER climate:\nhttps://www.washingtonpost.com/resizer/NZ7I-Gq5a0HwTMvDVOUFebrUrR4=/1484x0/arc-anglerfish-washpost-prod-washpost.s3.amazonaws.com/public/7IKRMSG3EAI6TJUIGA3JH62LBM.jpg" << std::endl;
                std::cout << "And here is the WINTER link!\nhttps://cdn.theatlantic.com/assets/media/img/mt/2015/02/PoleStation_2013_1/lead_720_405.jpg?mod=1533691729" << std::endl;
        }
        else
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Polar WINTER climate:\nhttps://cdn.theatlantic.com/assets/media/img/mt/2015/02/PoleStation_2013_1/lead_720_405.jpg?mod=1533691729" << std::endl;
                std::cout << "And here is the SUMMER link!\nhttps://www.washingtonpost.com/resizer/NZ7I-Gq5a0HwTMvDVOUFebrUrR4=/1484x0/arc-anglerfish-washpost-prod-washpost.s3.amazonaws.com/public/7IKRMSG3EAI6TJUIGA3JH62LBM.jpg" << std::endl;
        } 
}