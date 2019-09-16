// Programmer Name: Tanner Crane
// Section: A 
// Program Name: Steer the Rat into the right hole to get the cheese
// Description: Simple betting game that begins by asking you if you want to play. 
// You start off with a fixed amount of $500, 
// and are able to bet until you are out of money or choose to quit by pressing n when prompted.


#include "pch.h"
#include <iostream>
#include "stdlib.h"
#include <ctime>
#include <climits>
#include <conio.h>

using namespace std;

int main()

{
	srand(time(NULL));
	int inhand_cash = 0, bet = 0, rathole = 0, hole = 0;
	int y = 0, x = 0;
	char answer;

	do {
		cout << "Do you want to play a game a simple betting game?(y/n)" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n" << endl;
		cin >> answer;


		if (answer == 'y')

		{
			inhand_cash = 500;
		}
		while (answer == 'y')
		{
			while (inhand_cash > 0)
			{
				cout << "You currently have $" << inhand_cash << endl << "How much would you like to bet?" << endl;
				cin >> bet;
				
				if (cin.fail()) { 
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
					cout << endl << "That wasn't a number! \n\n"<< endl;
					break;
			
				}


				if (bet <= 0)
				{
					cout << "Unable to bet with negative values. \n\n";
					break;
				}


				

				if (bet > inhand_cash)
				{
					cout << "Not enough cash to place that bet. \n\n";
					break;
				}



				cout << "The cheese is in one of three holes. Choose a number between 1 and 3:\n" << endl;
				cin >> rathole;
				int hole = rand() % 3 + 1;

					if (cin.fail()) { 
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << endl << "That wasn't a number! \n\n" << endl;
					break;

				}
				
				
				if (rathole <= 0 || rathole >= 4)
				{
					cout << "Incorrect number. Start Over. \n\n";
					break;
				}




				if (rathole == hole && bet <= inhand_cash && bet > 0)
				{
					inhand_cash += 2 * bet;
					cout << "Congrats, you have gotten the cheese!\n" << endl;
				}
				else
				{
					inhand_cash -= bet;
					cout << "Sorry, you have lost!\n" << endl;
				}



				cout << "Would you like to continue playing? (y/n)\n";
				cin >> answer;

				if (bet > inhand_cash && answer != 'y' && answer != 'n')
				{
					cout << "Not enough cash to continue or you didn't choose y/n. Start over! \n\n" << endl; 
					system("pause");
					return 0;
				}
				if (answer == 'n')
				{
					break;
				}
				if (answer == 'y' && inhand_cash <= bet)
				{
					break; 
				}


			}
		}
	}
	while (answer == 'y');

	cout << "Thanks for playing my game :D\n\n"<< endl; 

	system("pause");
	return 0;
}
	
	




