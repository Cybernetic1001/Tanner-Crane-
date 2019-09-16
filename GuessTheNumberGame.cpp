// GuessTheNumberGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 


int main()
{
	int difficulty = 0;
	int tries = 0; 
	char answer = 'y'; 
	srand(time(0));
	int number1 = rand() % 10 + 1; 
	int number2 = rand() % 100 + 1; 
	int number3 = rand() % 1000 + 1; 
	int userInput = 0; 
	
	
	do {

		cout << "\nLet's play guess the number! \n" << endl;
		cout << "Choose the difficulty level (1 is easy, 2 is medium, and 3 is hard): ";
		cin >> difficulty;
		if (difficulty < 0)
		{
			cout << "\n Enter a postive value for difficulty \n" << endl;

		}

		while (difficulty == 1)
		{
			cout << "\nChoose a number between 1 and 10: \n" << endl;
			cin >> userInput;
			tries++;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Failed to read the data. Please enter a numeric value next time \n " << endl; 
			
			}
			
			
			if (userInput < number1)
			{
				cout << "Number chosen is too low. Try again \n" << endl;
			}
			else if (userInput > number1)
			{
				cout << "The number is too high. Try again" << endl;
			}
			else
			{
				if (tries <= 3)
				{
					cout << "Congratulations! You chose the correct number in " << tries << " attempts. You are a smart cookie! " << endl;
					break;
				}
				if (tries > 3 && tries <= 6)
				{
					cout << "You have chosen the correct number in " << tries << " attempts, but you can do better! " << endl;
					break;
				}
				else if (tries > 6)
				{
					cout << "You can do better! Try again next time. \n " << endl;
					break;
				}
			}
		}

		while (difficulty == 2)
		{
			cout << "\nChoose a number between 1 and 100. \n" << endl;
			cin >> userInput;
			tries++;

			

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Failed to read the data. Please enter a numeric value \n " << endl;

			}

			
			
			
			
			
			if (userInput < number2)
			{
				cout << "Number chosen is too low. Try again \n" << endl;
			}
			else if (userInput > number2)
			{
				cout << "The number is too high. Try again" << endl;
			}
			else
			{
				if (tries <= 3)
				{
					cout << "Congratulations! You chose the correct number in " << tries << " attempts. You are a smart cookie! " << endl;
					break;
				}
				if (tries > 3 && tries <= 6)
				{
					cout << "You have chosen the correct number in " << tries << " attempts, but you can do better! " << endl;
					break;
				}
				else if (tries > 6)
				{
					cout << "You got the correct number in " << tries <<" attempts. Better luck next time. \n " << endl;
					break;
				}
			}
		}

		while (difficulty == 3)
		{
			cout << "\nChoose a number between 1 and 1000. \n" << endl;
			cin >> userInput;
			tries++;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Failed to read the data. Please enter a numeric value \n " << endl;

			}


			if (userInput < number3)
			{
				cout << "Number chosen is too low. Try again \n" << endl;
			}
			else if (userInput > number3)
			{
				cout << "The number is too high. Try again" << endl;
			}
			else
			{
				if (tries <= 3)
				{
					cout << "Congratulations! You chose the correct number in " << tries << " attempts. You are a smart cookie! " << endl;
					break;
				}
				if (tries > 3 && tries <= 6)
				{
					cout << "You have chosen the correct number in " << tries << " attempts, but you can do better! " << endl;
					break;
				}
				else if (tries > 6)
				{
					cout << "You can do better! Try again next time. \n " << endl;
					break;
				}
			}
		}
	    cout << "Would you like the play again? (y/n) ";
		cin >> answer;

} while (answer == 'y');

 if (answer != 'y')
	{
		cout << "\n Thanks for playing \n " << endl; 
	}


		   system("PAUSE");
			return 0; 
	}