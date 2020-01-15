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


void Tropical::display()
{
    std::cout << "Tropical climates tend to be humid and have some trees. It has rain often.\n An example of a Tropical climate is the Amazon Basin in Brazil." << std::endl;
    std::cout << "Please type 'Summer' or 'Winter' to see an example of Tropical during the Summer or Winter";
        std::string result = "";
        std::cin >> result;
        while(result != "Summer" && result != "summer" && result != "Winter" && result != "winter")
        {
                std::cout << "Please type either 'Summer' or 'Winter'.";
        }
        if(result == "Summer" || result == "summer")
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Tropical SUMMER climate:\nhttps://images.squarespace-cdn.com/content/v1/5388e453e4b0813d343199fc/1443044262095-UUZTFSVG2YRE93CIXEAM/ke17ZwdGBToddI8pDm48kFFXBXerXLN6fTN8dQYEqChZw-zPPgdn4jUwVcJE1ZvWQUxwkmyExglNqGp0IvTJZamWLI2zvYWH8K3-s_4yszcp2ryTI0HqTOaaUohrI8PIyfHm-ixq4Fbqq_hwZKp3uBl9mKPHkemwqY7wH6FpCjo/Amazon+river" << std::endl;
                std::cout << "And here is the WINTER link!\nhttps://amazonaid.org/wp-content/uploads/2017/08/ACA0039-1-300x201.jpg" << std::endl;
        }
        else
        {
                std::cout << "Here is a link to copy and search on Google to see an example of a Tropcial WINTER climate:\nhttps://amazonaid.org/wp-content/uploads/2017/08/ACA0039-1-300x201.jpg" << std::endl;
                std::cout << "And here is the SUMMER link!\nhttps://images.squarespace-cdn.com/content/v1/5388e453e4b0813d343199fc/1443044262095-UUZTFSVG2YRE93CIXEAM/ke17ZwdGBToddI8pDm48kFFXBXerXLN6fTN8dQYEqChZw-zPPgdn4jUwVcJE1ZvWQUxwkmyExglNqGp0IvTJZamWLI2zvYWH8K3-s_4yszcp2ryTI0HqTOaaUohrI8PIyfHm-ixq4Fbqq_hwZKp3uBl9mKPHkemwqY7wH6FpCjo/Amazon+river" << std::endl;
        } 
}