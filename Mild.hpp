/** @file Mild.hpp
 * Created by Farhene Sultana
**/


#ifndef MILD_H_
#define MILD_H_

#include "Climate.hpp"
#include <string>
#include <iostream>

class Mild : public Climate
{
    public:
        //Constructor
        Mild() = default;

        //paramterized constructor
        Mild(std::string name, std::string type, bool humidity, 
        std::string temperature, std::string air_pressure);

        /** @post sets mild_winter to true **/
        void setMildWinter();

        /** @post sets hot_dry_summer to true **/
        void setHotDrySummer();

        /** @post sets nocturnal animals to true **/
        void setNocturnalAnimals();

        /** @returns true if mild winter **/
        bool hasMildWinter();

        /** @return true if hot and dry summer **/
        bool hasHotDrySummer();

        /** @return true if has nocturnal animals **/
        bool hasNocturnalAnimals();

         /*display info*/
        virtual void display() override;


    private:
        bool mild_winter_;
        bool hot_dry_summer_;
        bool nocturnal_animals_;
}
#endif //end of Mild.hpp