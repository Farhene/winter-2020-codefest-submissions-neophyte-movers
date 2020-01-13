/** @file Tundra.cpp
Created by Gabriella Alexis
Modified by Farhene Sultana
January 4, 2020 **/

#include "Tundra.hpp"
#include <iostream>
#include <string>

//parameterized constructor
Tundra::Tundra(std::string name, std::string type, bool humidity, std::string temperature, 
std::string air_pressure) : Climate(name, type, humidity, temperature, air_pressure), trees_(false),
mountains_(false), arctic_(false), antarctic_(false), alpine_(false){}

//sets humidity
void Tundra::setTundraHumidity()
{   humidity_ = true;   }

//returns humid status
bool Tundra::TundraIsHumid()
{   return humidity_;   }

/** @post sets arctic to true **/
void Tundra::setArctic()
{   arctic_ = true;     }

        /** @post sets antarctic to true **/
void Tundra::setAntarctic()
{   antarctic_ = true;  }

        /** @post sets alpine to true **/
void Tundra::setAlpine()
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


//display info
void Tundra::display()
{
   std::cout << "The Tundra climate tend to have mountains.\nIt is treeless and soil is permanently frozen.\nAn example of a Tundra is the Arctic and on top of mountains where climate is cold and windy.\nSummers here bring bursts of wildflowers however!" << std::endl;
   std::cout << "Please type 'Summer' or 'Winter' to see an example of Tundra during the Summer or Winter";
   std::string result = "";
   std::cin >> result;
   while(result != "Summer" && result != "summer" && result != "Winter" && result != "winter")
   {
           std::cout << "Please type either 'Summer' or 'Winter'.";
   }
   if(result == "Summer" || result == "summer")
   {
        std::cout << "Here is a link to copy and search on Google to see an example of a Tundra SUMMER climate:\nhttps://www.conserve-energy-future.com/wp-content/uploads/2019/03/alpine-tundra-daylight-environment.jpg" << std::endl;
        std::cout << "And here is the WINTER link!\nhttps://s3.amazonaws.com/user-media.venngage.com/864469-0deee697ae5d1297d949a4698e625002.jpeg" << std::endl;
   }
   else
   {
        std::cout << "Here is a link to copy and search on Google to see an example of a Tundra WINTER climate:\nhttps://s3.amazonaws.com/user-media.venngage.com/864469-0deee697ae5d1297d949a4698e625002.jpeg" << std::endl;
        std::cout << "And here is the SUMMER link!\nhttps://www.conserve-energy-future.com/wp-content/uploads/2019/03/alpine-tundra-daylight-environment.jpg" << std::endl;
   }
   
}