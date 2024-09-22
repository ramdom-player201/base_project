// base_project.cpp : Defines the entry point for the application.
//

#include "base_project.h" // unsure what this does
#include <iostream> // import input/output stream library
#include "CustomConsole.h"

#include "Services/WindowManagementService.h"

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
		cout << std::endl;
		cout << "1. Test create window\n"; // console output
		cout << "2. Test list windows\n";
		cout << "3. Test remove window\n";
		cout << "9. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice; // console input
		cout << std::endl;

		if (cin.fail()) { // cin.fail() checks the cin for error states, and returns true or false
			cout << "Input error";
			cin.clear(); // remove error state
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard errored input
			cout << "Invalid input. Please enter an integer.\n";
			continue; // restart loop
		}

		//windowParams params;
		//Window newWindow;

		switch (choice) {
		case 1: {
			cout << "Creating test window.\n";
			cout << "Choose a title.\n";
			std::string newTitle;
			cin >> newTitle;

			windowParams params;
			params.width = 800;
			params.height = 600;
			params.title = newTitle;
			params.type = windowParams::programWindow;
			Window newWindow(WindowManagementService::createWindow(params));
			break;
		}
		case 2: {
			cout << "Listing all windows...\n";
			cout << "There are currently ["<<WindowManagementService::getWindowCount()<<"] windows open.\n";
			auto windows = WindowManagementService::getAllWindows();
			for (const auto& pair : windows) {
				int id = pair.first;
				const Window& win = pair.second;
				std::cout << "Window ID: " << id << ", Title: " << win.getTitle() << std::endl;
			}
			break;
		}
		case 3: {
			int id;
			cout << "Choose a window ID.\n";
			cin >> id;
			WindowManagementService::closeWindow(id);
			break;
		}
		case 9:
			cout << "Exiting.\n";
			break;
		default:
			cout << "Invalid. Try again.\n";
		}
	} while (choice != 9);
	
	return 0;
}
