/*Created by Gabriella Gonzalez
This file is made if the user chooses urban area
to start as a place
*/

#ifndef URBAN_AREA_H
#define URBAN_AREA_H
#include "Climate.hpp"
#include <iostream>

class Urban: public Climate{
	public:
		Urban();
		Urban(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

		virtual void display() override;

};
#endif

