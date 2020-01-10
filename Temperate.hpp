/** @file Temperate.hpp
 * Created by Farhene Sultana
**/

#ifndef TEMPERATE_H_
#define TEMPERATE_H_

#include "Climate.hpp"
#include <string>
#include <iostream>

class Temperate : public Climate
{
    public:
        //constructor
        Temperate() = default;

        //parameterized constructor
        Temperate(std::string name, std::string type, bool humidity, 
        std::string temperature, std::string air_pressure);

        /** @post sets plant_life_ to true **/
        void setPlantLife();

        /** @post sets cold_winter_ to true **/
        void setColdWinter();

        /** @post sets mild_summer_ to true **/
        void setMildSummer();

        /** @returns true if plant_life_ **/
        bool hasPlantLife();

        /** @returns true if cold_winter_ **/
        bool hasColdWinters();

        /** @returns true if mild_summer_ **/
        bool hasMildSummers();

          /*display info*/
        virtual void display() override;

    private:
        bool plant_life_;
        bool cold_winter_;
        bool mild_summer_;
}

#endif //end of Temperate.hpp