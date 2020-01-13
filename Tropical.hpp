/*tropical HPP file created by Gabriella Gonzalez
Modified by Farhene Sultana
inherits from the class CLimate
*/
#ifndef TROPICAL_H_
#define TROPICAL_H_

#include "Climate.hpp"
#include <iostream>
#include <string>

class Tropical: public Climate 
{
	public:
		Tropical() = default;
        Tropical(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

		/** @post sets tropical humid to true **/
		void setTropicalHumidity();

		/** @post sets trees to true **/
		void setTrees();

		/** @post sets rain to true**/
		void setTropicalRain();

		/** @returns true if tropical humid **/
		bool isHumid();

		/** @returns true if has trees **/
		bool hasTrees();

		/** @returns true if has rain **/
		bool hasRain();

		
		virtual void display() override;

	private:
		bool tropical_humid_; //if tropical is humid or not
		bool trees_; //has trees or not
		bool rain_; //is raining or not


};
#endif //end of Tropical.hpp