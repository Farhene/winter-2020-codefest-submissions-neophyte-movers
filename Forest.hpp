/*Created by Gabriella Gonzalez
This file is made if the user chooses forest area
to start as a place
*/

#ifndef FOREST_H
#define FOREST_H
#include "Climate.hpp"
#include <iostream>

class Forest: public Climate{
	public:
		Forest();
		Forest(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

		virtual void display() override;

};
#endif