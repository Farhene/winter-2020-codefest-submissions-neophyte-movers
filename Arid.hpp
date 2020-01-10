/** @file Arid.hpp
 * Created by Farhene Sultana
**/


#ifndef ARID_H_
#define ARID_H_

#include "Climate.hpp"
#include <string>
#include <iostream>

class Arid : public Climate
{
    public:
        //constructor
        Arid() = default;

        //parameterized constructor
        Arid(std::string name, std::string type, bool humidity, 
        std::string temperature, std::string air_pressure);

        /** @post sets hot to true **/
        void setHot();

        /** @post sets dry to true **/
        void setDry();

        /** @post sets desert_ to true**/
        void setDesert();

        /** @returns true if hot **/
        bool isHot();

        /** @returns true if dry **/
        bool isDry();

        /** @returns true if desert_ **/
        bool hasDesert();

         /*display info*/
        virtual void display() override;

    private:
        bool hot_;
        bool dry_;
        bool desert_;
}
#endif //end of Arid.hpp
