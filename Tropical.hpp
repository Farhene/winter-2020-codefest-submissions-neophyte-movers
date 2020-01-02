/*tropical HPP file created by Gabriella Gonzalez
inherits from the class CLimate
*/
#ifndef TROPICAL_H_
#define TROPICAL_H_

#include "Climate.hpp"
#include <iostream>

class Tropical: public Climate {
	public:
		Tropical() = default;
        Tropical(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

        //sets the tropical humidity to true
		void setTropicalHumidity();

		//@return whether the tropical climate it hot or not
		bool TropicalIsHumid();

		void setTropicalTrees(int numberOfTropicalTrees);

		//returns the number of trees in tropical
		int numberOfTropicalTrees();

		//sets the tropical rain to true
		void setTropicalRain();

		//@return if tropical has rain or not
		bool hasRain();

		//sets the number of species living
		void setNumberOfSpecies(int NumberOfSpecies);

		//returns the number of species living
		int NumberOfSpecies();

		virtual void display() override;

	private:
		bool TropicalHumid_; //if tropical is humid or not
		int Trees_; //has trees or not
		int Species_; //# of species 
		bool Rain_; //is raining or not


}//end of Tropical.hpp