/** @file Tundra.hpp
Created by Gabriella Alexis
Modifed by Farhene Sultana
January 4, 2020 **/

#ifndef TUNDRA_H_
#define TUNDRA_H_

#include "Climate.hpp"
#include <iostream>
#include <string>

class Tundra : public Climate 
{
    public:
        /* default constructor */
        Tundra() = default; 
        /*parameterized constructor*/
        Tundra(std::string name, std::string type, bool humidity, 
        std::string temperature, std::string air_pressure);
        /*sets tundra humidity*/
        void setTundraHumidity();
        /*returns humidity status*/
        bool TundraIsHumid();
        /** @post sets arctic to true **/
        void setArctic();
        /** @post sets antarctic to true **/
        void setAntarctic();
        /** @post sets alpine to true **/
        void setAlpine();
        /*sets trees*/
        void setTrees();
        /*returns tree status*/
        bool hasTrees();
        /*sets mountains*/
        void setMountains();
        /*returns mountain status*/
        bool hasMountains();
        /*display info*/
        virtual void display() override;
    
    private:
        bool trees_;
        bool mountains_;
        bool humidity_;
        bool arctic_;
        bool antarctic_;
        bool alpine_;
}
#endif