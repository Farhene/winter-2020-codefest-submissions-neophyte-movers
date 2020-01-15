/*Ocean HPP file created by Gabriella Gonzalez
inherits from the class CLimate
*/
#ifndef OCEAN_H_
#define OCEAN_H_

#include "Climate.hpp"
#include <iostream>

class Ocean: public Climate {
	public:
		Ocean();
        Ocean(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

		virtual void display() override;

};

#endif