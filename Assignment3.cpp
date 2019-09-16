#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>


using namespace std;

void readAndProcessFiles();

int main() {
	cout << "\t\t ~ Word Counter ~ " << endl;
	readAndProcessFiles();
	return 0;
};

void readAndProcessFiles() {
	ifstream fin;
	string fileName;
	string word;
	int strLength = 0, wordLengths[9] = { 0 }, totalWords = 0;
	//string fileIn;
	//string word;
	//char ch;
	//int count = 0;


	cout << "Please enter the name of the file:\n";
	/*getline (cin,fileIn);*/
	cin >> fileName;
	fin.open(fileName);
	//fin.open(fileIn.c_str());

	if (fin.fail()) {
		cout << "File unable to be opened. Try again:\n";
		cin.clear();
		while (cin >> fileName) {
			fin.close();
			fin.clear();
			fin.open(fileName);
			if (fin.fail()) {
				cin.clear();
				cout << "File unable to be opened. Try again:\n";
			}
			else
				break;
		}
	}
	while (!fin.eof()) {
		//fin >> ch;
		fin >> word;
		strLength = word.length();
		if (!isalpha(word.at(0))) {
			--strLength;
		}
		if (!isalpha(word.at(word.length() - 1))) {
			--strLength;
		}
		switch (strLength) {
		case 1: {
			++wordLengths[0];
			break;
		}
		case 2: {
			++wordLengths[1];
			break;
		}
		case 3: {
			++wordLengths[2];
			break;
		}
		case 4: {
			++wordLengths[3];
			break;
		}
		case 5: {
			++wordLengths[4];
			break;
		}
		case 6: {
			++wordLengths[5];
			break;
		}
		case 7: {
			++wordLengths[6];
			break;
		}
		case 8: {
			++wordLengths[7];
			break;
		}
		default: {
			++wordLengths[8];
			break;
		}
		}
		totalWords++;
		strLength = 0;
	}
	cout << "Number of words in the file is: " << totalWords << endl;
	for (int i = 0; i < 9; ++i) {
		if (i == 8)
			cout << "Words of length >8" << ":\t" << wordLengths[i] << endl;
		else
			cout << "Words of length " << i + 1 << ":\t" << wordLengths[i] << endl;
	}
	return;
	/*cout << "Number of words in the file is: " << count;
	cout << "Number of characters in the file is: " << ch;
	fin.close();
	cin.get();*/