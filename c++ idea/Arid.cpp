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


         /*display info*/
void Arid::display()
{
     std::cout << "Arid climates tend to have dry and hot environments.\nWinters can be freezing!\nAn example of an arid climate would be a desert." << std::endl;   
     std::cout << "Please type 'Summer' or 'Winter' to see an example of Arid during the Summer or Winter";
        std::string result = "";
        std::cin >> result;
        while(result != "Summer" && result != "summer" && result != "Winter" && result != "winter")
        {
                std::cout << "Please type either 'Summer' or 'Winter'.";
        }
        if(result == "Summer" || result == "summer")
        {
                std::cout << "Here is a link to copy and search on Google to see an example of an Arid SUMMER climate:\nhttp://www.thomaswdufour.com/wp-content/uploads/2016/11/jtheader-1170x550.jpg" << std::endl;
                std::cout << "And here is the WINTER link!\nhttps://d36tnp772eyphs.cloudfront.net/thetravelersnotebook.com/docs/wp-content/images/posts/20090121-deserts04.jpg" << std::endl;
        }
        else
        {
                std::cout << "Here is a link to copy and search on Google to see an example of an Arid WINTER climate:\nhttps://d36tnp772eyphs.cloudfront.net/thetravelersnotebook.com/docs/wp-content/images/posts/20090121-deserts04.jpg" << std::endl;
                std::cout << "And here is the SUMMER link!\nhttp://www.thomaswdufour.com/wp-content/uploads/2016/11/jtheader-1170x550.jpg" << std::endl;
        } 
}
