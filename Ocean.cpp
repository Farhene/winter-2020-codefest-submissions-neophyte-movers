/*Ocean CPP file created by Gabriella Gonzalez
inherits from the class Climate
let me know if this is an okay class for tropical 
and if i need to add anything else
*/
#include "Climate.hpp"
#include "Ocean.hpp"
#include <string>
#include <iostream>
using namespace std;

Ocean::Ocean():name_(""), type_(""), humidity_(false), temperature_(""), air_pressure_(""){}

Ocean::Ocean(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure),Acidic_(false),OceanLife_(0){}

// void Ocean::setOceanAcidic(){
// 	Acidic_ = true;
// } 

// bool Ocean::OceanIsAcidic(){
// 	return Acidic_;
// }

// void Ocean::setOceanLife(int numberOfOceanLife){
// 	OceanLife_ = numberOfTropicalTrees;
// }

// int Tropical::numberOfTropicalTrees(){
// 	return OceanLife_;
// }

void Ocean::display(){
			cout<<"We are visiting the beach! surrounded by water and beautiful sea creature life\n";
		cout<<"----------------------------------------------------------------------------------\n";

		cout<<"\n\nWe set up everything on the beach and brought lots of items, what should we keep in mind before we leave?\n";
		cout<<"A. Pick up all our trash\n";
		cout<<"B. Make sure we got a good tan\n";
		cout<<"C. Take awesome photos\n";
		cout<<"D. We need ice-cream\n";

		cout<<"Answer: ";
		cin >> answer;

		if(answer != "a" && answer != "A"){
			cout<< "Wrong answer. We must pick up all our trash before we leave to not harm the environment.\n";
		}
		else{
			cout<<"Correct answer!"<<endl;
		}

		cout<<"\n\nWhat kind of material should we avoid using on the beach?\n";
		cout<<"A. nondisposable containers\n";
		cout<<"B. Reusable water bottle\n";
		cout<<"C. Plastic\n";
		cout<<"D. Reusable bag\n";

		cout<<"Answer: ";
		cin>> answer;

		if(answer != "C" || answer != "c"){
			cout<<"Wrong answer. we must avoid using plastic for it ends up as ocean debris that contribute to habitsat destruction\n";
		}
		else{
			cout<<"Correct answer!" <<endl;
		}
}