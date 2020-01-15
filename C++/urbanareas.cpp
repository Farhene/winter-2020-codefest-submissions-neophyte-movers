#include "Climate.hpp"
#include "urbanareas.hpp"
#include <iostream>
#include <string>

Urban::Urban():
Climate(){}

Urban::Urban(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure){}

void Urban::display(){

	std:: string answer= "";
	std::cout<<"\n\nWe are living in a Urban area, such as New York City!\n";

		std::cout<<"Even though we do not have much grass or water surrounding us, we are still surrounded by air.\n";
		std::cout<<"This air that we are breathing in is highly polluted. Lets figure out ways\n";
		std::cout<<"that we can prevent polluted air to continue in the big apple!"<<std::endl<<std::endl;

		std::cout<<"-----------------------------------------------------------\n";

		std::cout<<"What is the best way to use transportation?\n\n";
		std::cout<<"A. Train!\n";
		std::cout<<"B. Walking!\n";
		std::cout<<"C. Taxi!\n";
		std::cout<<"D. Bike!\n";
		std::cout<<"E.None of the above\n";
		std::cout<<"F. All of the above\n";

		std::cout<<"Answer: ";
		std::cin>> answer;

		if(answer == "B" || answer == "b" || answer == "D" || answer == "d" ){
			std::cout<<"Correct answer! using the bike or walking will reduce less energy!"<<std::endl;

		}
		else{
			std::cout<<"Wrong answer. This will in fact cause the use of more energy which will continue for us to have pollution"<<std::endl;
		}

		std::cout<<"\n\nWhich transit vehicle is supposedly better for our climate?\n";
		std::cout<<"A. Subway Trains\n";
		std::cout<<"B. Taxi\n";
		std::cout<<"C. Electric bus\n";
		std::cout<<"D. Non electric bus\n";

		std::cout<<"Answer ; ";
		std::cin >> answer;

		if(answer != "C" && answer != "c"){
			std::cout<<"Wrong Answer. The correct answer is electric bus because it limits greenhouse gases from vehicles"<<std::endl;
		}
		else{
			std::cout<<"Correct answer! Electric buses limit greenhouse gases from vehicles"<<std::endl;
		}
}