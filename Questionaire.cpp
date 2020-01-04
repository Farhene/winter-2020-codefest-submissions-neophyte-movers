/*Made by Gabriella Gonzalez
Modified by Farhene Sultana
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

	cout<<"\n\n\nWe will begin with some small trivia questions!"<<endl <<endl;
	cout << "-----------------------------------------------------" << endl<<endl;

	cout<<"What do we use energy for?\n";
	cout<<"A. Heat\n";
	cout<<"B. Power\n";
	cout<<"C. Transportation\n";
	cout<<"D. Light \n";
	cout<<"E. All of the above\n\n";

	cout<<"Type your letter answer here: ";
	cin >> answer;
	
	while(answer != "E" && answer != "e")
	{
		cout << "-----------------------------------------------------" << endl<<endl;
		cout<<"Wrong answer. Try again."<<endl;
		
		cout<<"What do we use energy for?\n";
		cout<<"A. Heat\n";
		cout<<"B. Power\n";
		cout<<"C. Transportation\n";
		cout<<"D. Light \n";
		cout<<"E. All of the above\n\n";
		cout<<"Type your letter answer here again: ";
		cin >> answer;
	}
	
	cout << "\n\nCorrect!" << endl;

	cout << "-----------------------------------------------------" << endl;

	cout << "Next Question" << endl;

	cout << "-----------------------------------------------------" << endl;


	cout<<"\n\nHow many forms of energy are there?\n";
	cout<<"A. 4\n";
	cout<<"B. 2\n";
	cout<<"C. 6\n";
	cout<<"D. 1\n";
	cout<<"E. there are more than 6!\n\n";

	cout<<"Answer: ";
	cin >> answer;

	while(answer != "A" && answer != "a"){
			cout << "-----------------------------------------------------" << endl;
		cout << "Incorrect. Please try again!" << endl;
		cout<<"\nThe forms of energy is; Electricity, Biofuels, Refined products, and Biochar\n";
			cout << "-----------------------------------------------------" << endl;

		cout<<"\n\nHow many forms of energy are there?\n";
		cout<<"A. 4\n";
		cout<<"B. 2\n";
		cout<<"C. 6\n";
		cout<<"D. 1\n";
		cout<<"E. there are more than 6!\n\n";

		cout<<"Answer: ";
		cin >> answer;
	}

		cout << "\nYay! Correct!" << endl;
		cout << "-----------------------------------------------------" << endl;
		cout << "Next!" << endl;
		cout << "-----------------------------------------------------" << endl;



	cout<<"\n\nWhat refers to the processes that convert an energy resource into a usable form of energy?\n";
	cout<<"A. Form\n";
	cout<<"B. Transport\n";
	cout<<"C. Production\n";
	cout<<"D. Conversion\n";
	cout<<"E. None of the above\n\n";

	cout<<"Answer: ";
	cin >> answer;
	while(answer != "D" && answer != "d"){
		cout<<"Sorry that's not right. Try again!" << endl;
		cout << "-----------------------------------------------------" << endl;
		cout<<"\n\nWhat refers to the processes that convert an energy resource into a usable form of energy?\n";
		cout<<"A. Form\n";
		cout<<"B. Transport\n";
		cout<<"C. Production\n";
		cout<<"D. Conversion\n";
		cout<<"E. None of the above\n\n";

		cout<<"Answer: ";
		cin >> answer;
	}
	
	cout << "\nSplendid!" << endl;;
	cout << "-----------------------------------------------------" << endl;
	cout << "Next Question!" << endl;
	cout << "-----------------------------------------------------" << endl;



	cout<<"\n\nIs protecting our planet hard?\n";
	cout<<"A. Yes. I don't think I can do something to help our planet.\n";
	cout<<"B. No, I'm just not sure how we can help as individuals.\n";
	cout<<"C. No, there are ways I can help I'm sure!\n\n";

	cout<<"Type your letter answer: ";
	cin>> answer;

	while(answer != "A" && answer != "a" && answer != "B" && answer != "b" && answer != "C" && answer != "c")
	{
			cout << "\n-----------------------------------------------------" << endl;
		cout << "Please type an existing letter!" << endl;
			cout << "-----------------------------------------------------" << endl;
					cin >> answer;

	}
	if(answer == "B" || answer == "b" || answer == "a" || answer == "A"){
		cout<<"\n\nTruthfully, we as invdividuals can help protect our climates and the Earth easily!\n\n";
		cout << "Type 'N' and press enter to continue" << endl;
		string next = "";
		cin >> next;
		
		cout<<"\n\nIf one person stops burning fossil feuls, it may not feel like a big difference. But the power of one is still more effective than 0.\n\n";
		cout << "Type 'N' and press enter to continue" << endl;
		cin >> next;

		cout << "\n\nA tree is an example of a natural climate solution. We can use nature to repair the planet.\n\n";
		cout << "Type 'N' and press enter to continue" << endl;
		cin >> next;

		cout << "\n\nWe can also pay for things that help nature and not pay for things that destroy nature. \n\n";
		cout << "Type 'N' and press enter to continue" << endl;
		cin >> next;
		
		cout << "\n\nMost importantly, know what you are doing and be aware of this topic." << endl << endl;
		cout << "Type 'N' and press enter to continue" << endl;
		cin >> next;	
	}

	else if(answer == "c" || answer == "C")
	{
			cout << "-----------------------------------------------------" << endl;
		cout << "Wonderful drive!" << endl;
			cout << "-----------------------------------------------------" << endl;
	}
	
			cout << "-----------------------------------------------------" << endl;
			cout << "-----------------------------------------------------" << endl;


/*questions on preveneting 
climate change
*/
	cout<<"As we know, it is very important that we prevent climate change, in order to protect out planet.\n";
	cout<<"Let us choose a place on where we want to begin preventing climate change.\n";
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