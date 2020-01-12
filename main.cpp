/*Made by Gabriella Gonzalez
Modified by Farhene Sultana
this is the sample trivia questions so far
Need help with the while loop, error is said in the comment before the loop
let me know if i am heading in the right direction
*/

#include "Climate.hpp"
//#include "ClimateType.hpp" //THIS FILE INCLUDES ALL CLIMATE FILES. AND CALLS THE DISPLAY FUNCTION OF EACH CLIMATE FILES
//#include "AllEnergy.hpp" //THIS FILE INCLUDES ALL ENERGYTYPE FILES.

//#include "Tropical.hpp"
//#include "Polar.hpp"

//#include "Water.hpp"
#include "Ocean.hpp"
#include "urbanareas.hpp"
#include "Rural.hpp"
#include "Forest.hpp"
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


	cout<<"\n\nWhat percent of climate scientists agree that human activities are causing climate change?\n";
	cout<<"A. 63%\n";
	cout<<"B. 55%\n";
	cout<<"C. 24%\n";
	cout<<"D. 97%\n\n";

	cout<<"Answer: ";
	cin>>answer;
	while(answer != "D" && answer != "d"){
		cout<<"Sorry thats not right. Try again!"<< endl;
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"\n\nWhat percent of climate scientists agree that human activities are causing climate change?\n";
		cout<<"A. 63%\n";
		cout<<"B. 55%\n";
		cout<<"C. 24%\n";
		cout<<"D. 97%\n\n";

		cout<<"Answer: ";
		cin >> answer;
	}

	cout << "\nCorrect!" << endl;;
	cout << "-----------------------------------------------------" << endl;
	cout << "Next Question!" << endl;
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

	cout<<"\n\nHow much our has our planet warmed already on average?\n";
	cout<<"A. 1.0 degrees Celsuis\n";
	cout<<"B. 0.5 degrees Celsuis\n";
	cout<<"C. 2.0 degrees Celsuis\n";
	cout<<"D. 1.5 degrees Celsuis\n";

	cout<<"Answer: ";
	cin>> answer;
	while(answer != "A" && answer != "a"){
		cout<<"Sorry thats not right. Try again!"<<endl;
		cout<<"\n\nHow much our has our planet warmed already on average?\n";
		cout<<"A. 1.0 degrees Celsuis\n";
		cout<<"B. 0.5 degrees Celsuis\n";
		cout<<"C. 2.0 degrees Celsuis\n";
		cout<<"D. 1.5 degrees Celsuis\n";

		cout<<"Answer: ";
		cin>> answer;
	}

	cout << "\nAmazing!" << endl;;
	cout << "-----------------------------------------------------" << endl;
	cout << "Next Question!" << endl;
	cout << "-----------------------------------------------------" << endl;

	cout<<"\n\nHow much more acidic are our oceans today?\n";
	cout<<"A. 20% more acidic today\n";
	cout<<"B. More than 26% more acidic today\n";
	cout<<"C. 11% more acidic today\n";
	cout<<"No change\n";

	cout<<"Answer: ";
	cin >> answer;

	while(answer != "B" && answer != "b"){
		cout<<"Sorry thats not right. Try again!"<<endl;
		cout<<"\n\nHow much more acidic are our oceans today?\n";
		cout<<"A. 20% more acidic today\n";
		cout<<"B. More than 26% more acidic today\n";
		cout<<"C. 11% more acidic today\n";
		cout<<"No change\n";

		cout<<"Answer: ";
		cin >> answer;
	}
	cout << "\nGreat!" << endl;;
	cout << "-----------------------------------------------------" << endl;
	cout << "Next Question!" << endl;
	cout << "-----------------------------------------------------" << endl;

	cout<<"\n\nCompared to 1750, how much more methane is in our air today?\n";
	cout<<"A. 150%\n";
	cout<<"B. 20%\n";
	cout<<"C. 100%\n";
	cout<<"D. 40%\n";
	cout<<"E. No change\n";

	cout<<"Answer: ";
	cin>> answer;

	while(answer != "A" && answer != "a"){
		cout<<"Sorry that's not right. Try again"<<endl;
		cout<<"\n\nCompared to 1750, how much more methane is in our air today?\n";
		cout<<"A. 150%\n";
		cout<<"B. 20%\n";
		cout<<"C. 100%\n";
		cout<<"D. 40%\n";
		cout<<"E. No change\n";

		cout<<"Answer: ";
		cin>> answer;
	}
	cout << "\nWell Done!" << endl;;
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

/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/

/*questions on preveneting 
climate change
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/
/*********************************************************************************************************************************/

	cout<<"As we know, it is very important that we prevent climate change, in order to protect our planet.\n";
	cout<<"Let us choose a place on where we want to begin preventing climate change.\n";
	cout<<"Choose a type of area to begin" <<endl;
	cout<<"A. Urban areas\n";
	cout<<"B Rural areas\n";
	cout<<"C. forests\n";
	cout<<"D. Oceans\n";

	cout<<"Place to begin: ";
	cin >> place;

	if(place == "A" || place == "a"){
		Urban U;
		U.display();
	}

	if(place == "B" || place == "b"){
		Rural R;
		R.display();

	}


	if(place == "C" || place == "c"){
		Forest F;
		F.display();
	}

	if(place == "D" || place == "d"){

		Ocean O;
		O.display();
		
	}
}
//testing