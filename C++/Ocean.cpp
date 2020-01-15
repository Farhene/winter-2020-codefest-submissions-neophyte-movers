/*Ocean CPP file created by Gabriella Gonzalez
inherits from the class Climate
let me know if this is an okay class for tropical 
and if i need to add anything else
*/
#include "Climate.hpp"
#include "Ocean.hpp"
#include <string>
#include <iostream>

Ocean::Ocean():
Climate(){}

Ocean::Ocean(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure){}


void Ocean::display(){

		std::string answer = "";
		std::	cout<<"\n\nWe are visiting the beach! surrounded by water and beautiful sea creature life\n";
		std::cout<<"----------------------------------------------------------------------------------\n";

		std::cout<<"\n\nWe set up everything on the beach and brought lots of items, what should we keep in mind before we leave?\n";
		std::cout<<"A. Pick up all our trash\n";
		std::cout<<"B. Make sure we got a good tan\n";
		std::cout<<"C. Take awesome photos\n";
		std::cout<<"D. We need ice-cream\n";

		std::cout<<"Answer: ";
		std::cin >> answer;

		if(answer != "a" && answer != "A"){
			std::cout<< "Wrong answer. We must pick up all our trash before we leave to not harm the environment.\n";
		}
		else{
			std::cout<<"Correct answer!"<<std::endl;
		}

		std::cout<<"\n\nWhat kind of material should we avoid using on the beach?\n";
		std::cout<<"A. nondisposable containers\n";
		std::cout<<"B. Reusable water bottle\n";
		std::cout<<"C. Plastic\n";
		std::cout<<"D. Reusable bag\n";

		std::cout<<"Answer: ";
		std::cin>> answer;

		if(answer != "C" || answer != "c"){
			std::cout<<"Wrong answer. we must avoid using plastic for it ends up as ocean debris that contribute to habitsat destruction\n";
		}
		else{
			std::cout<<"Correct answer!" <<std::endl;
		}

		std::cout<<"\n\nWe brought lots of food for us to eat, what's the best way to dispose our trash?\n";
		std::cout<<"A. Dig it in the sand\n";
		std::cout<<"B. Find the nearest trash can\n";
		std::cout<<"C. Throw it in the ocean\n";
		std::cout<<"D. Anywhere is fine\n";

		if(answer != "B" && answer != "b"){
			std::cout<<"Wrong answer. We want to keep the enviromnet clean, so lets throw it in the trash.\n";
		}
		else{
			std::cout<<"Correct!"<<std::endl;
		}

		std::cout<<"\n\nWe see so much trash washed up ashore, what should we do?\n";
		std::cout<<"A. Volunteer to clean it up\n";
		std::cout<<"B. Ignore it\n";
		std::cout<<"C. Push it back in the water\n";
		std::cout<<"D. Throw your trash along with it\n";

		if(answer != "A" && answer != "a"){
			std::cout<<"Wrong answer. Lets volunteer, we would be helping our planet!\n";
		}
		else{
			std::cout<<"Correct!"<<std::endl;
		}
		
}