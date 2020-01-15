/*Created by Gabriella Gonzalez
This file is made if the user chooses rural area
to start as a place
*/

#ifndef RURAL_AREA_H
#define RURAL_AREA_H
#include "Climate.hpp"
#include <iostream>

class Rural: public Climate{
	public:
		Rural();
		Rural(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

		virtual void display() override;

};
#endif