/** @file Tundra.hpp
Created by Gabriella Alexis
January 4, 2020 **/

#ifndef TUNDRA_H_
#define TUNDRA_H_

#include "Climate.hpp"

class Tundra : public Climate {
    public:
        /* default constructor */
        Tundra(); 
        /*parameterized constructor*/
        Tundra(std::string name, std::string type, bool humidity, 
        std::string temperature, std::string air_pressure);
        /*sets tundra humidity*/
        void setTundraHumidity();
        /*returns humidity status*/
        bool TundraIsHumid();
        /*sets the three types of tundra climates: arctic, antarctic, alpine*/
        void setTundraTypes();
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
        int species_;
        bool mountains_;
        bool humidity_;
}
#endif