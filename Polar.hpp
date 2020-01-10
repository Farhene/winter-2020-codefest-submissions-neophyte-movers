/** @file Polar.hpp
 * Created by Farhene Sultana
**/

#ifndef POLAR_H_
#define POLAR_H_

#include "Climate.hpp"
#include <string>
#include <iostream>

class Polar : public Climate
{
    public:
        //Constructor
        Polar() = default;

        //Paramterized Constructor
        Polar(std::string name, std::string type, bool humidity, 
        std::string temperature, std::string air_pressure);

        /** @post sets dry_ to true **/
        void setDry();

        /** @post sets cold_ to true **/
        void setCold();

        /** @post sets plant-life to true**/
        void setPlantLife();

        /** @post sets snow to true**/
        void setSnow();

        /** @returns true if dry**/
        bool isDry();

        /** @returns true if cold **/
        bool isCold();

        /** @returns true if has plant life **/
        bool hasPlant_Life();

        /** @returns true if there is snow **/
        bool hasSnow();

        /*display info*/
        virtual void display() override;
    private:
        bool dry_;
        bool cold_;
        bool plant_life_;
        bool snow_;
}
#endif //end of Polar.hpp