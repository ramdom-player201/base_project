// base_project.cpp : Defines the entry point for the application.
//

#include "base_project.h" // unsure what this does
#include <iostream> // import input/output stream library
#include "CustomConsole.h"

using namespace std; // unsure what this does

int main()
{
	cout << "Hello CMake." << endl; // unsure what this does

	int choice;
	CustomConsole console;
	console.printColoured();
	console.log("hello");
	CustomConsole::log("Hello 2");

	do {
		cout << "1. Option1\n"; // console output
		cout << "2. Option 2\n";
		cout << "3. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice; // console input

		if (cin.fail()) { // cin.fail() checks the cin for error states, and returns true or false
			cout << "Input error";
			cin.clear(); // remove error state
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard errored input
			cout << "Invalid input. Please enter an integer.\n";
			continue; // restart loop
		}

		switch (choice) {
		case 1:
			cout << "You selected Option 1.\n";
			break;
		case 2:
			cout << "You selected Option 2.\n";
			break;
		case 3:
			cout << "Exiting.\n";
			break;
		default:
			cout << "Invalid. Try again.\n";
		}
	} while (choice != 3);
	
	return 0;
}
