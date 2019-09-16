// NumberPyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Tanner Crane CS&131 Number Pyramid - Extra Credit 

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int i, j, k, l;
	int n = 6;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{
			cout << k;
		}
		for (l = i - 1; l >= 1; l--)
		{
			cout << l << " ";
		}
		cout << "\n";
	}
	cout << "\n\n";
	system("Pause");
	return 0;
}
