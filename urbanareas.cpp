#include "Climate.hpp"
#include "urbanareas.hpp"
#include <iostream>
using namespace std;

Urban::Urban():
Climate(){}

Urban::Urban(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure){}

void Urban::display(){

	std:: string answer= "";
	cout<<"\n\nWe are living in a Urban area, such as New York City!\n";

		cout<<"Even though we do not have much grass or water surrounding us, we are still surrounded by air.\n";
		cout<<"This air that we are breathing in is highly polluted. Lets figure out ways\n";
		cout<<"that we can prevent polluted air to continue in the big apple!"<<endl<<endl;

		cout<<"-----------------------------------------------------------\n";

		cout<<"What is the best way to use transportation?\n\n";
		cout<<"A. Train!\n";
		cout<<"B. Walking!\n";
		cout<<"C. Taxi!\n";
		cout<<"D. Bike!\n";
		cout<<"E.None of the above\n";
		cout<<"F. All of the above\n";

		cout<<"Answer: ";
		cin>> answer;

		if(answer == "B" || answer == "b" || answer == "D" || answer == "d" ){
			cout<<"Correct answer! using the bike or walking will reduce less energy!"<<endl;

		}
		else{
			cout<<"Wrong answer. This will in fact cause the use of more energy which will continue for us to have pollution"<<endl;
		}

		cout<<"\n\nWhich transit vehicle is supposedly better for our climate?\n";
		cout<<"A. Subway Trains\n";
		cout<<"B. Taxi\n";
		cout<<"C. Electric bus\n";
		cout<<"D. Non electric bus\n";

		cout<<"Answer ; ";
		cin >> answer;

		if(answer != "C" && answer != "c"){
			cout<<"Wrong Answer. The correct answer is electric bus because it limits greenhouse gases from vehicles"<< endl;
		}
		else{
			cout<<"Correct answer! Electric buses limit greenhouse gases from vehicles"<<endl;
		}
}