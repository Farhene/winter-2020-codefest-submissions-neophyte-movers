/*Made by Gabriella Gonzalez
this is the sample trivia questions so far
Need help with the while loop, error is said in the comment before the loop
let me know if i am heading in the right direction
*/

#include <iostream>
#include <string>
using namespace std;

int main (){

	string answer = "";
	string place = "";

	cout<<"Type the correct letter answer."<<endl <<endl;

	cout<<"What do we use energy for?\n";
	cout<<"A. Heat\n";
	cout<<"B. Power\n";
	cout<<"C. Transportation\n";
	cout<<"D. Light \n";
	cout<<"E. All of the above\n\n";

/*for some reason this while loop is not working for me
  it is supposed to keep asking the question until the user gets it right
  wanted this to work so it would be more efficient and have less lines
  of code 

while(answer != "E" || answer != "e"){
	cout<<"Answer: ";
	cin >> answer;

	if(answer != "E" || answer != "e"){
	cout<<"Wrong answer. Try again."<<endl;
	cout<<"What do we use energy for?\n";
	cout<<"A. Heat\n";
	cout<<"B. Power\n";
	cout<<"C. Transportation\n";
	cout<<"D. Light \n";
	cout<<"E. All of the above\n\n";		
	}
	else
		break;
	}
	cout<<"Correct!"<<endl;
*/
 
 cout<<"Answer: ";
 cin >> answer;

 if(answer == "E" || answer == "e"){
 	cout<<"Correct! Good job!" << endl;
 	cout<<"Energy allows us to transport ourselves efficiently from point A to point B,";
 	cout<<" stay warm in cold months or cool in hot months, have light and power to run our various home appliances\n\n";
 }
else{
	cout<<"Wrong answer, the correct answer is E"<<endl;
}

	cout<<"\n\nWhat is our largest piece of energy distribution infrastructure?\n";
	cout<<"A. Smart Grid\n";
	cout<<"B. Electric Grid\n";
	cout<<"C. Energy Storage\n";
	cout<<"D. Transport Fuels\n";
	cout<<"E. None of the above\n\n";

	cout<<"Answer: ";
	cin>> answer;

	if(answer == "B" || answer == "b"){
		cout<<"Correct! Great work!" << endl;
		cout<<"Electrical Grid is the means through which power is generated, transmitted, and distributed to the end user."<<endl;
	}
	else{
		cout<<"Wrong answer. The correct answer is B."<<endl;
	}

	cout<<"\n\nHow many types of forms of energy are there?\n";
	cout<<"A. 4\n";
	cout<<"B. 2\n";
	cout<<"C. 6\n";
	cout<<"D. 1\n";
	cout<<"E. there are more than 6!\n\n";

	cout<<"Answer: ";
	cin >> answer;

	if(answer == "A" || answer == "a"){
		cout<<"Correct! awesome!" << endl;
		cout<<"The 4 forms of energy is; Electricity, Biofuels, Refined products, and Biochar\n";
	}
	else{
		cout<<"Wrong answer. The correct answer is A." <<endl;
	}

	cout<<"\n\nWhat refers to the processes that convert an energy resource into a usable form of energy?\n";
	cout<<"A. Form\n";
	cout<<"B. Transport\n";
	cout<<"C. Production\n";
	cout<<"D. Conversion\n";
	cout<<"E. None of the above\n\n";

	cout<<"Answer: ";
	cin >> answer;
	if(answer == "D" || answer == "d"){
		cout<<"Correct! SUPER" << endl;
		cout<<"Energy is only consumed in a few major forms - such as electricity or transportation fuels." << endl;
	}
	else{
		cout<<"Wrong answer. The correct answer is D." << endl;
	}

	cout<<"\n\nHow many categories does energy sources have?\n";
	cout<<"A. 5\n";
	cout<<"B. 3\n";
	cout<<"C. 2\n";
	cout<<"D. 4\n";
	cout<<"E. 1\n\n";

	cout<<"Answer: ";
	cin >> answer;

	if(answer == "B" || answer == "b"){
		cout<<"Correct! nice work!"<< endl;
		cout<<"energy sources are grouped into three categories - fossil fuels, alternative energy, and revewables."<<endl;
	}
	else{
		cout<<"Wrong answer. The correction answer is B." << endl;
	}


/*questions on preveneting 
climate change
*/
	cout<<"As we know, it is very important that we prevent climate change, in order to protect out planet.\n";
	cout<<"Let choose a place on where we want to begin preventing climate change.\n";
	cout<<"Choose a type of area to begin" <<endl;
	cout<<"A. Urban areas\n";
	cout<<"B Rural areas\n";
	cout<<"C. forests\n";
	cout<<"D. Oceans\n";

	cout<<"Place to begin: ";
	cin >> place;

	if(place == "A" || place == "a"){
		cout<<"We are living in a Urban area, such as New York City!\n";
		cout<<"Even though we do not have much grass or water surrounding us, we are still surrounded by air.\n";
		cout<<"This air that we are breathing in is highly polluted. Lets figure out ways\n";
		cout<<"that we can prevent polluted air to continue in the big apple!"<<endl<<endl;

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
	}

	if(place == "B" || place == "b"){
		cout<<"We are living in a rural area. Surrounded by grass and trees\n";

	}
}
//testing