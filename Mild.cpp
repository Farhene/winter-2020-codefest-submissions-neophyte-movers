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
{   hot_dry_summer_ = true;    }

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


         /*display info*/
void Mild::display()
{
   std::cout << "Mild climates tend to have mild winters and hot/dry summers.\nThere is also an abundance of nocturnal animals!\n An example of a mild climate is San Francisco with mild winters and dry summers." << std::endl;
   std::cout << "Please type 'Summer' or 'Winter' to see an example of Mild during the Summer or Winter";
        std::string result = "";
        std::cin >> result;
        while(result != "Summer" && result != "summer" && result != "Winter" && result != "winter")
        {
                std::cout << "Please type either 'Summer' or 'Winter'.";
        }
        if(result == "Summer" || result == "summer")
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Mild SUMMER climate:\nhttps://upload.wikimedia.org/wikipedia/commons/0/0c/Tossa_de_Mar_View.jpg" << std::endl;
                std::cout << "And here is the WINTER link!\nhttps://media.fromthegrapevine.com/assets/images/2014/8/snow%20storm%20in%20old%20jerusalem%20photo.jpg.480x0_q71_crop-scale.jpg" << std::endl;
        }
        else
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Mild WINTER climate:\nhttps://media.fromthegrapevine.com/assets/images/2014/8/snow%20storm%20in%20old%20jerusalem%20photo.jpg.480x0_q71_crop-scale.jpg" << std::endl;
                std::cout << "And here is the SUMMER link!\nhttps://upload.wikimedia.org/wikipedia/commons/0/0c/Tossa_de_Mar_View.jpg" << std::endl;
        } 
}
