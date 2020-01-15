#include "Climate.hpp"
#include "Rural.hpp"
#include <iostream>
#include <string>

Rural::Rural():
Climate(){}

Rural::Rural(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure){}

void Rural::display(){
	std::string answer = "";

		std::cout<<"\n\nWe are living in a rural area. Surrounded by grass and trees\n";
		std::cout<<"-----------------------------------------------------------------"<<std::endl;

		std::cout<<"\n\nHow many trees should we planet in our neighborhood?\n";
		std::cout<<"A. 10-20\n";
		std::cout<<"B. 20-50\n";
		std::cout<<"C. 50-100\n";
		std::cout<<"D. As much as we can!\n";

		std::cout<<"Answer: ";
		std::cin>> answer;

		if(answer != "D" && answer != "d"){
			std::cout<<"Wrong Answer. the correst answer is as much as we can! We want to create as many homes for our animals and keep our earth growing"<<std::endl;
		}
		else{
			std::cout<<"Yes correct! it is never too much to grow trees!"<<std::endl;
		}

		std::cout<<"\n\nWhat is the best way for us to keep the nature living?\n";
		std::cout<<"A. Throw out trash wherever we want\n";
		std::cout<<"B. Dont litter\n";
		std::cout<<"C. keep planting\n";
		std::cout<<"D. Using gas machinary on farms\n";
		std::cout<<"E. A and D\n";
		std::cout<<"F. B and C\n";

		std::cout <<"Answer: ";
		std::cin >> answer;

		if(answer != "f" && answer != "F"){
			std::cout<<"Wrong answer. the correct answer is both B and C.";
		}
		else{
			std::cout<<"Yes correct! This will be saving our environment."<<std::endl;
		}
}