// change counter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Practice 

#include"pch.h"
#include<iostream>
using namespace std;
int main() 
{
	double pennies, nickels, dimes, quarters, total;
	cout << "Change Counter" << endl;
cout << "###############################" << endl;

cout <<"Enter the number of pennies: ";

cin >> pennies;

cout <<"Enter the number of nickels: ";

cin >> nickels;

cout <<"Enter the number of dimes: ";


cin >> dimes;

cout <<"Enter the number of quarters: ";

cin >> quarters;

cout <<"\n";

total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

cout <<"You have:"<< endl;

cout << pennies << " pennies\n"<< nickels <<" nickels\n"<< dimes <<" dimes\n"<< quarters <<" quarters\n"<< endl;

cout <<"Total value: $"<< total << endl;

system("pause");
return 0;
}