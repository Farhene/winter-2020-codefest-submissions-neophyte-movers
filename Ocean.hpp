/*Ocean HPP file created by Gabriella Gonzalez
inherits from the class CLimate
*/
#ifndef OCEAN_H_
#define OCEAN_H_

#include "Climate.hpp"
#include <iostream>

class Ocean: public Climate {
	public:
		Ocean() = default;
        Ocean(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

        //sets the tropical humidity to true
		void setOceanAcidic();

		//@return whether the tropical climate it hot or not
		bool OceanIsAcidic();

		void setOceanLife(int numberOfOceanLife);

		//returns the number of trees in tropical
		int numberOfOceanLife();

		virtual void display() override;

	private:
		bool OceanTemp_;
		int OceanLife_; 
		bool Acidic_; //is raining or not


}//end of Tropical.hpp