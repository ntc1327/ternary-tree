#include <iostream>
#include <string>
#include <fstream>
#include "ttree.h"

using namespace std;

int main() {
	// initalizes all needed variables
	tTree tree;
	string fileChoice;
	ifstream file;
	float numList[1000];
	
	// outputs instructions for user
	cout << "Please enter the text file you would like to use." << endl;
	cout << "For my data, enter inputData.txt." << endl;
	cout << "For Dr. Finkel's data, enter inputs.txt." << endl;
	cout << "Choice: ";

	cin >> fileChoice; // gets the user input for the file

	// outputs more instructions for user
	cout << endl;
	cout << "Thank you for choosing. To continue, press enter." << endl;
	cin.get();
	cin.get(); // second added after just one didn't work

	// set of if statements to read in data from the selected text file
	// first is for my data, second is for Dr. Finkel's data
	// else statement contains error message if the user's input did not match a file name and exits the program
	if (fileChoice == "inputData.txt") {
		file.open("inputData.txt");
		if (!file.fail()) {
			for (int i = 0; i < 1000; i++) {
				file >> numList[i];
			}
			file.close();
		}
	}
	else if (fileChoice == "inputs.txt") {
		file.open("inputs.txt");
                if (!file.fail()) {
                        for (int i = 0; i < 1000; i++) {
                                file >> numList[i];
                        }
                        file.close();
                }
	}
	else {
		cout << "Error with passing in the text file, please use inputData.txt or inputs.txt." << endl;
		return 0;
	}
	
	// inserts data into the tree
	for (int i = 0; i < 1000; i++) {
		tree.insert(numList[i], tree.root);
	}
	
	// prints the tree
	tree.printTree(tree.root);

	return 0;
}
