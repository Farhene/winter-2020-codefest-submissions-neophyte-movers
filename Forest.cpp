#include "Climate.hpp"
#include "Forest.hpp"
#include <iostream>
#include <string>

Forest::Forest():
Climate(){}

Forest::Forest(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure){}

void Forest::display(){

		std::string answer = " ";
		
		std::cout<<"We are visiting the forest for some camping! surrounded by green and trees. Even though there are trees surrounding us, it is best to keep it that way and clean\n";
		std::cout<<"-------------------------------------------------------------------------"<<std::endl;

		std::cout<<"\n\nSince we are camping, we are going to be creating a camp fire. What should we make sure what to do for the safety of the woods?\n";
		std::cout<<"A. Make sure its hot\n";
		std::cout<<"B. Make sure its fully put out\n";
		std::cout<<"C. Make sure its big\n";
		std::cout<<"D. Make sure it builds a lot of smoke\n";

		std::cout<<"Answer: ";
		std::cin >> answer;

		if(answer != "b" && answer != "B"){
			std::cout<<"Wrong answer. We want to make sure the fire is fully out so it would not create forest fires\n";
		}
		else{
			std::cout<<"Correct!"<<std::endl;
		}

		std::cout<<"\n\nWe brought lots of food for us to eat, what's the best way to dispose our trash?\n";
		std::cout<<"A. Anywhere is fine\n";
		std::cout<<"B. Dig it in the ground\n";
		std::cout<<"C. Put it in a trash bag\n";
		std::cout<<"D. Throw it in the nearest river\n";

		if(answer != "C" && answer != "c"){
			std::cout<<"Wrong answer. We want to keep the enviromnet clean, so lets throw it in the trash.\n";
		}
		else{
			std::cout<<"Correct!"<<std::endl;
		}

		
}