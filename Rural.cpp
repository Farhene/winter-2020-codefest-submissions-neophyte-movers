#include "Climate.hpp"
#include "Rural.hpp"
#include <iostream>
using namespace std;

Rural::Rural():
Climate(){}

Rural::Rural(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure):
Climate(name,type,humidity,temperature,air_pressure){}

void Rural::display(){
	std::string answer = "";

	cout<<"\n\nWe are living in a rural area. Surrounded by grass and trees\n";
		cout<<"-----------------------------------------------------------------"<<endl;

		cout<<"\n\nHow many trees should we planet in our neighborhood?\n";
		cout<<"A. 10-20\n";
		cout<<"B. 20-50\n";
		cout<<"C. 50-100\n";
		cout<<"D. As much as we can!\n";

		cout<<"Answer: ";
		cin>> answer;

		if(answer != "D" && answer != "d"){
			cout<<"Wrong Answer. the correst answer is as much as we can! We want to create as many homes for our animals and keep our earth growing"<< endl;
		}
		else{
			cout<<"Yes correct! it is never too much to grow trees!"<<endl;
		}

		cout<<"\n\nWhat is the best way for us to keep the nature living?\n";
		cout<<"A. Throw out trash wherever we want\n";
		cout<<"B. Dont litter\n";
		cout<<"C. keep planting\n";
		cout<<"D. Using gas machinary on farms\n";
		cout<<"E. A and D\n";
		cout<<"F. B and C\n";

		cout <<"Answer: ";
		cin >> answer;

		if(answer != "f" && answer != "F"){
			cout<<"Wrong answer. the correct answer is both B and C.";
		}
		else{
			cout<<"Yes correct! This will be saving our environment."<<endl;
		}
}